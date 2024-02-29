#include <stdio.h>
#include <sys/time.h>

int main(){
    struct timeval start, end;

    float elapsed_time;
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

    printf("Press enter to start. Then enter the alphabet in lowercase as fast as you can.\n>> ");

    while(getchar() != '\n');

    gettimeofday(&start, NULL);

    printf("\n\nType the alphabet!>> ");

    char alphaTyped[45] = "";

    fgets(alphaTyped, sizeof(alphaTyped), stdin);

    gettimeofday(&end, NULL);

    if (end.tv_usec < start.tv_usec){
        end.tv_usec += 1000000;
        end.tv_sec -= 1;
    }

    elapsed_time = (end.tv_sec - start.tv_sec) + (end.tv_usec-start.tv_usec)/1000000.0;

    printf("Time Elapsed = %f\n", elapsed_time);

    float accuracy;
    int correctChar = 0;
    int typedChar = 0;

    for (int i = 0; i<sizeof(alphaTyped); i++){
        if (alphaTyped[i] == NULL){
            i = sizeof(alphaTyped);
        }
        else{
            typedChar += 1;
            if (alphaTyped[i] == alphabet[i]){
                correctChar += 1;
            }
        }
    }

    typedChar -= 1;

    printf("typed characters = %d\n", typedChar);
    printf("correct characters = %d\n", correctChar);

    typedChar *= 1.0;
    accuracy = ((float)correctChar/typedChar)*100;

    printf("Accuracy = %f%%", accuracy);

    return 0;
}
