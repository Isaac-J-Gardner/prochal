#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main() {
    time_t cd = time(NULL);
    struct tm *current_date = localtime(&cd);

    int cYear = current_date->tm_year + 1900; //cYear for current year, + 1900 as tm_year is how many years since 1900
    int cMonth = current_date->tm_mon + 1; // +1 as tm_mon represents january as 0 and december as 11
    int cDays = current_date->tm_yday; //days since january 1st

    int bYear, bMonth, bDay;
    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Enter your date of birth:\nYear(YYYY)>> ");
    scanf("%d", &bYear);
    printf("\nMonth(1-12)>> ");
    scanf("%d", &bMonth);
    printf("\nDay(1-31)>> ");
    scanf("%d", &bDay);

    int daysLived = 0;

    daysLived += (cYear-bYear-1)*365; //-1 because it these are years you are guaranteed to have passed (it may not have passed your birthday

    int leapYears = 0;


    //calculating how many leap years have been lived

    bool bLeap = false;//if born during a leap year, if born after feb 29, this leap day must be discounted
    bool cLeap = false;//equally if currently in a leap year, but have not yet past feb 29th, that leap day must be discounted

    if (bMonth < 3){
        if (bDay < 29){
            bLeap = true;
        }
    }
    if (cMonth > 2){
        cLeap = true;
    }

    for (int i = bYear + 1; i <= cYear; i++) {
        if (i == bYear && !bLeap) {
            continue;
        }

        if (i == cYear && !cLeap) {
            continue;
        }

        if (i % 4 == 0) { //if the year is not to be skipped, then the year is checked for being a leap year.
            if (i % 100 == 0) {
                if (i % 400 == 0) {
                    leapYears += 1;
                }
            } else {
                leapYears += 1;
            }
        }
    }

    daysLived += leapYears;

    for (int i=bMonth; i<=12; i++){
        if (i == bMonth){
            daysLived += days_in_month[i-1] - bDay;
        }
        else{
            daysLived += days_in_month[i-1];
        }
    }

    daysLived += cDays + 1;

    printf("total number of days lived: %d", daysLived);

    return 0;
}
