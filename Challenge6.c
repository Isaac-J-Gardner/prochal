#include <stdio.h>
#include <sys/time.h>

int main(){
    struct timeval start, end;

    float elapsed_time;

    printf("Press enter to start. Then press enter again when you think 10 seconds has passed.\n>> ");

    while(getchar() != '\n');

    gettimeofday(&start, NULL);

    printf("\n\nPress enter when 10 seconds has passed>> ");

    while(getchar() != '\n');

    gettimeofday(&end, NULL);

    if (end.tv_usec < start.tv_usec){
        end.tv_usec += 1000000;
        end.tv_sec -= 1;
    }

    elapsed_time = (end.tv_sec - start.tv_sec) + (end.tv_usec-start.tv_usec)/1000000.0;

    printf("Time Elapsed = %f\n", elapsed_time);

    float accuracy;
    if (elapsed_time>10.0){
        accuracy = 10.0/elapsed_time * 100;
    }
    else{
        accuracy = elapsed_time/10.0 * 100;
    }

    printf("Accuracy = %f%%", accuracy);

    return 0;
}
