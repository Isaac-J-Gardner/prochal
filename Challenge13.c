#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    srand(time(NULL));
    int numLeft = (rand() % 11) + 20;
    printf("starting number: %d", numLeft);

    int playerchoice;
    int cpuchoice;

    while (true){
        printf("\n\nEnter a value from 1 to 3 to subtract from the total>> ");
        scanf("%d", &playerchoice);
        printf("\n\nPlayer choice>> %d", playerchoice);
        numLeft -= playerchoice;
        if (numLeft <= 0){
            printf("\n\nPlayer Wins!!");
            break;
        }
        printf("\n\n%d left", numLeft);
        cpuchoice = (numLeft + 2) % 3;
        if (cpuchoice == 0){
            cpuchoice = 3;
        }
        if (((numLeft - cpuchoice)/3)%2 == 0){
            if (numLeft%3 == 1){
                cpuchoice = 2;
            }
            else{
                cpuchoice = 1;
            }
        }
        if (numLeft < 4){
            cpuchoice = numLeft;
        }
        printf("\n\nCPU choice>> %d", cpuchoice);
        numLeft -= cpuchoice;
        printf("\n\n%d left", numLeft);
        if (numLeft <= 0){
            printf("\n\nCPU Wins!!");
            break;
        }
    }
    return 0;
}
