#include <string.h>
#include <stdio.h>
#include <ctype.h>

void strlwr(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]); // Convert to lowercase
    }
}

int main(int argc, char *argv[])
{
    int result;
    char string1[20] = "John "; //20 to give space when concating
    char string2[] = "Pork";

    // Uncomment one at a time

    // strlwr(string1); // john
    // strcat(string1,  string2); // John Pork
    // strncat(string1, string2, 3); // John Por
    // strcpy(string1, string2); // Pork
    // strncpy(string1, string2, 1); // Pohn
    
    // result = strlen(string1); //5
    // result = strcmp(string1, string2); // -6
    // result = strcmp("The same", "The same"); // 0 (equal)
    // result = strncmp("The first", "The latter", 3); // Comparing the first 3 letters: 0 (equal)
    
    printf("%s\n", string1);
    printf("%d\n", result);


    return 0;
}
