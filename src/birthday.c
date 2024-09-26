#include <stdio.h>

void birthday(char name[], int age){

    printf("Happy birthday dear %s!\n", name);
    printf("You are %d years old!\n", age);
    
}

int main(int argc, char *argv[]){

    char name[] = "John Pork";
    int age = 69;

    birthday(name, age);
    return 0;
}
