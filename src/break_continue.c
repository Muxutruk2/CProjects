#include <stdio.h>

int main(){

    // continue = skips rest of code & forces the next iteration of the loop
    // break = exits loop/switch
    
    for(int i = 1; i <= 20; i++){
        // print all number from 1 to 20 except 13
        if (i == 13){
            continue; // This skips the printf statment and continues
            // break: < This would only go until 12
        }
        printf("%d\n", i);
    }

    return 0;
}
