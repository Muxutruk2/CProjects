#include "stdio.h"

enum Day{
    Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6, Sun = 7, 
};

int main(){
    enum Day today = Sat;

    if(today == Sat || today == Sun){
        printf("Its the weekend! Party time!\n");
    } else{
        printf("I have to work today :( \n");
    }
}
