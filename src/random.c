#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){

    srand(time(0)); // Set seed to time
    
    // int number = rand() % 6; // 0 - 5 both included
    // int number = rand() % 6 + 1; // 1 - 6 both included
    
    int number1 = rand() % 6 + 1;
    int number2 = rand() % 6 + 1;
    int number3 = rand() % 6 + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}
