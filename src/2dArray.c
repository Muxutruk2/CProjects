#include "stdio.h"

int main(){

    int numbers[][3] = { // 3 is the max size
        {1, 2, 3}, 
        {4, 5, 6},
        {7, 8, 9},
    };

    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns =  sizeof(numbers[0]) / sizeof(numbers[0][0]);

    // You can also assing it like this
    // numbers[0][0] = 6;
    // numbers[0][1] = 3;
    // numbers[0][2] = 9;
    // numbers[1][0] = 12;
    // numbers[1][1] = 52;
    // numbers[1][2] = 21;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}
