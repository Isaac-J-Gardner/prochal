#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printchoice(int choice){
    switch (choice){
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");

            break;
    }
}

int main(){
    srand(time(NULL));
    int cpu = (rand() % 3) + 1;

    int Player;

    while(1==1){
        printf("Rock-1, Paper-2, Scissors-3\nPlease enter 1, 2, or 3>> ");
        scanf("%d", &Player);
        if (Player < 1 || Player > 3){
            printf("\nWhat you entered was not an option.\n");
        }
        else{
            break;
        }
    }

    printf("You>> ");
    printchoice(Player);

    printf("CPU>> ");
    printchoice(cpu);

    if (Player == cpu){
        printf("TIE!!");
    }
    else if ((Player == 0 && cpu == 3)||
             (Player == 1 && cpu == 0)||
             (Player == 2 && cpu == 1)){
        printf("YOU WIN!!");
    }
    else{
        printf("YOU LOSE!!");
    }

    return 0;
}
