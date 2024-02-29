#include <stdio.h>
#include <string.h>

int main(){
    char choice[10];
    int input1, input2;

    printf("Enter the value of the first input (0 or 1)>> ");
    scanf("%d", &input1);
    if (input1 != 0 && input1 != 1){
        printf("invalid selection");
        return 1;
    }
    printf("\nEnter the value of the second input (0 or 1)>> ");
    scanf("%d", &input2);
    if (input2 != 0 && input2 != 1){
        printf("invalid selection");
        return 1;
    }

    printf("\nChoose a logic gate(AND, OR, XOR, NAND, NOR)>> ");
    scanf("%s", choice);
    printf("\n");

    if (strcasecmp(choice, "AND") == 0){
        if (input1 && input2){
            printf("output: 1");
        }
        else{
            printf("output: 0");
        }
    }
    else if (strcasecmp(choice, "OR") == 0){
        if (input1 || input2){
            printf("output: 1");
        }
        else{
            printf("output: 0");
        }
    }
    else if (strcasecmp(choice, "XOR") == 0){
        if (input1 && !(input2) || !(input1) && input2){
            printf("output: 1");
        }
        else{
            printf("output: 0");
        }
    }
    else if (strcasecmp(choice, "NAND") == 0){
        if (!(input1 && input2)){
            printf("output: 1");
        }
        else{
            printf("output: 0");
        }
    }
    else if (strcasecmp(choice, "NOR") == 0){
        if (!(input1 || input2)){
            printf("output: 1");
        }
        else{
            printf("output: 0");
        }
    }
    else{
        printf("invalid selection");
        return 1;
    }


    return 0;
}
