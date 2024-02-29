#include <stdio.h>

int main() {
    int choice;
    printf("Please choose which calculation you wish to perform:\n1 - Distance Travelled\n2 - Speed\n>> ");
    scanf("%d", &choice);
    if (choice == 1){
        float speed, time;
        printf("Speed: ");
        scanf("%f", &speed);
        printf("\nTime: ");
        scanf("%f", &time);
        float distance = speed * time;
        printf("Distance Travelled = %f", distance);
    }
    else{
        float time, distance;
        printf("Time: ");
        scanf("%f", &time);
        printf("\nDistance: ");
        scanf("%f", &distance);
        float speed = distance / time;
        printf("Speed = %f", speed);
    }
    return 0;
}
