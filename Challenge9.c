#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main(){
    while (1==1){
        char suits[4][8] = {"Spades", "Clubs", "Hearts", "Diamonds"};
        struct timeval ctime;
        gettimeofday(&ctime, NULL);
        srand(ctime.tv_usec);
        int suit = rand() % 4;
        gettimeofday(&ctime, NULL);
        srand(ctime.tv_usec);
        int suitVal = rand() % 13 + 1;

        char cardSuit[8];
        strcpy(cardSuit, suits[suit]);

        char cardVal[6];

        if (suitVal == 1){
            strcpy(cardVal, "Ace");
        }
        else if (suitVal == 11){
            strcpy(cardVal, "Jack");
        }
        else if (suitVal == 12){
            strcpy(cardVal, "Queen");
        }
        else if (suitVal == 13){
            strcpy(cardVal, "King");
        }
        else{
            sprintf(cardVal, "%d", suitVal);
        }

        printf("%s of %s", cardVal, cardSuit);

        while(getchar() != '\n');
    }
    return 0;
}
