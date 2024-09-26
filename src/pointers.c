#include <stdio.h>
// Without Pointers
// void print_age(int age){
//     printf("You are %d years old", age);
// }
//

// With pointers
void print_age(int *pAge){
    printf("You are %d years old", *pAge);
}

int main(){

    // Pointer = Variable-like reference that holds a memory address to another variable

    int age = 21;
    int *pAge = &age;

    // To declare a pointer but not assign it use this:
    // int *pAge = NULL;

    printf("Address of age: %p\n", &age);
    printf("Value of pAge: %p\n", pAge);
    // Address of age: 0x7ffe94c9c2e4
    // Value of pAge: 0x7ffe94c9c2e4
    // Same thing

    printf("Value of age: %d\n", age);
    printf("Value stored in pAge: %d\n", *pAge); // use * to de-reference a pointer
    // Value of age: 21
    // Value stored in pAge: 21

    printf("Size of age: %d\n", (int) sizeof(age));
    printf("Size of pAge: %d\n", (int) sizeof(pAge));
    // Size of age: 4
    // Size of pAge: 8
    // Pointers are always 8 bytes
    //
    print_age(pAge);




    return 0;
}
