#include <stdio.h>
#include <time.h>

int main() {
    time_t cd = time(NULL);
    struct tm *current_date = localtime(&cd);

    int cYear = current_date->tm_year + 1900; //cYear for current year, + 1900 as tm_year is how many years since 1900
    int cMonth = current_date->tm_mon + 1; // +1 as tm_mon represents january as 0 and december as 11
    int cDay = current_date->tm_mday; //days since start of the month

    int bYear, bMonth, bDay;
    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Enter your date of birth:\nYear(YYYY)>> ");
    scanf("%d", &bYear);
    printf("\nMonth(1-12)>> ");
    scanf("%d", &bMonth);
    printf("\nDay(1-31)>> ");
    scanf("%d", &bDay);

    if (cYear - bYear > 18){
        printf("you can vote");
    }
    else if(cYear - bYear == 18){
        if (cMonth>bMonth){
            printf("you can vote");
        }
        else if(cMonth = bMonth){
            if (cDay >= bDay){
                printf("you can vote");
            }
            else{
                printf("you cant vote");
            }
        }
        else{
            printf("you cant vote");
        }
    }
    else{
        printf("you cant vote");
    }

    return 0;
}
