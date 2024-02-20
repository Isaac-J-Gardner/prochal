#include <stdio.h>
#include <stdbool.h>

//write a program that will display all the factors of a number, entered by the user.
//extension: tell the user if the number they enteres if a prime number

int main(){
    int number = 0;
    bool prime = true;
    printf("Enter a number and find out its factors: ");
    scanf("%d", &number); //take the users input and store it in the address of number.
    printf("\nFactors\n1"); //1 is guarenteed to be a factor, this saves going through the loop and extra time.
    for (int i = 2; i <= number/2; i++){ //we can leave out any number greater than half of the value of the entered number as they will not be factors.
        if (number % i == 0){ //% is modulo operator, it gives the remainder of a division. If the result is 0, the number is a factor.
            prime = false;
            printf("\n%d", i);
        }
    }
    printf("\n%d", number); //skipped out the upper half to save time and resources, so manually print out the number itself as a factor.
    if (prime == true){
        printf("\n%d is prime and has no factors other than itself and 1", number);
    }
    return 0;
}