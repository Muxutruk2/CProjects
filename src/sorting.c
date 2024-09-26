#include "stdio.h"

void sort(char array[], int size){
    for(int i = 0; i < size -1; i++){
        for(int j = 0; j < size - 1; j++ ){
            if(array[j] > array[j+1]){
                int temp = array[j];

                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void print_array(char array[], int size){

    for(int i = 0; i < size; i++){
        printf("%c, ", array[i]);
    }
}

int main(){

    // int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    // Make sure to change "char" to "int" in the functions. And "c" to "d" in print_array
    char array[] = {'F', 'A', 'C', 'B', 'E', 'D'};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    print_array(array, size);

    return 0;
}
