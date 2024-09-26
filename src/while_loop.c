#include <stdio.h>
#include "string.h"

int main(){
    char name[25];

    printf("What's your name? > ");
    fgets(name, 25, stdin); // The name might contain spaces so we use fgets
    name[strlen(name) - 1] = '\0'; // Set the last byte (a new line) of name as a Null charachter
    
    while(strlen(name) == 0){
        printf("You did not enter your name!\n");
        printf("What's your name? > ");
        fgets(name, 25, stdin); // The name might contain spaces so we use fgets
        name[strlen(name) - 1] = '\0'; // Set the last byte (a new line) of name as a Null charachter
    }

    printf("Hello %s\n", name);
}
