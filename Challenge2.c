#include <stdio.h>

int main() {
    char name[20];
    printf("What is your name?>> ");
    gets(name);
    printf("Hello %s", name);
    return 0;
}
