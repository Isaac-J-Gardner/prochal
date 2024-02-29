#include <stdio.h>

int main() {
    float height;
    float width;
    float length;
    printf("Please enter the hight, width, and length of the Cuboid:\n");
    printf("Height>> ");
    scanf("%f", &height);
    printf("\nWidth>> ");
    scanf("%f", &width);
    printf("\nLength>> ");
    scanf("%f", &length);
    float volume = height * width * length;
    printf("The volume of the Cuboid is %f", volume);
    return 0;
}
