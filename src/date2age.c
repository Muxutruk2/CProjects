#include <stdio.h>

int main(int argc, char *argv[])
{
    int current_year = 2024;
    int input;

    printf("What year where you born?\n>");

    scanf("%d", &input);

    if (input > current_year || input < 1900) {
        printf("No you were not.\n");
        return 1;
    }

    int age = current_year - input;

    printf("You are %d years old\n", age);

    return 0;
}
