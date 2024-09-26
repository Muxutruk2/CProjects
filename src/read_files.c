// Run this in CProjects with ./bin/read_files
#include <stdio.h>


int main(){

    FILE *pF = fopen("poem.txt", "r"); // "r" for reading

    char buffer[255];

    if (pF == NULL){
        printf("Unable to open file!\n");
        return 1;
    }

    while(fgets(buffer, 255, pF)){
        printf("%s", buffer);
    }

    fclose(pF);
    
    return 0;

}
