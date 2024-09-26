#include <stdio.h>

int main(){
    // Writing
    FILE *pF = fopen("test.txt", "w"); // "a" for append
    fprintf(pF, "I love John Pork a lot");

    fclose(pF); // remember to close file
    
    if(remove("test.txt") == 0){ // Exit code
        printf("File deleted successfully\n");
    } else {
        printf("File was not deleted\n");
    }
    return 0;
}
