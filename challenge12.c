#include <stdio.h>
#include <stdbool.h>

//write a program that will display all the factors of a number, entered by the user, that are bigger than 1.
//extension: tell the user if the number they enteres if a prime number

int main(){
    int number = 0;
    bool prime = true;
    printf("Enter a number and find out its factors: ");
    scanf("%d", &number);
    printf("\nFactors:");
    for (int i = 2; i <= number/2; i++){
        if (number % i == 0){
            prime = false;
            printf("\n%d", i);
        }
    }
    if (prime == true){
        printf("\n%d is prime and has no factors other than itself and 1", number);
    }
    return 0;
}