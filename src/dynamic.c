#include "stdio.h"
#include "stdlib.h" // For malloc

void memory_hog(int size){
    int *a = malloc(size);
}

int main(){

    // int *a = malloc(sizeof(int) * 10); // Allocate 10 ints worth of memory 
    int *a = calloc(10, sizeof(int)); // Same as the above but will zero out the memory

    for(int i = 0; i < 10; i++){
        a[i] = 10 - i; // 10 to 1 in that memory
    }

    for(int i = 0; i < 10; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("a: %p\n", a);

    // Lets allocate more memory

    a = realloc(a, 20);

    for(int i = 0; i < 20; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    // undefined memory from 10 onwards since they were not seta[10] = 1041
    // a[11] = 0
    // a[12] = 825318241
    // a[13] = 540876893
    // a[14] = 942683189
    // a[15] = 942748472
    // a[16] = 2610
    // a[17] = 0
    // a[18] = 0
    // a[19] = 0

    int *save = a; // Lets save the a pointer

    free(a); // REMEMBER THIS!

    // Uncomment for free memory leak
    // while (1){
    //     memory_hog(1000000);
    // }

    // A has been freed yet we can access its content to an extent
    // Since free doesnt actually zero the memory, it makes it available to other proccesses
    for(int i = 0; i < 10; i++){
        printf("save[%d] = %d\n", i, save[i]);
    }

    // save[0] = 234118330
    // save[1] = 6
    // save[2] = -980114205
    // save[3] = 1231564875
    // save[4] = 6
    // save[5] = 5
    // save[6] = 4
    // save[7] = 3
    // save[8] = 2
    // save[9] = 1

    return 0;
}
