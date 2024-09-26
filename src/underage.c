#include "stdio.h"

int main(int argc, char *argv[])
{
    int age;

    printf("\nEnter your age > ");
    scanf("%d", &age);

    if (age >= 18){
        printf("You are of age");
    } else {
        printf("You are underage");
    }

    return 0;
}
