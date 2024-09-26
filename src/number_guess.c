#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){

    const int MIN = 1;
    const int MAX = 100;

    int guess;
    int guesses = 0;
    int answer;

    srand(time(0));

    answer = rand() % MAX + MIN;

    do{
        printf("Enter a guess > ");
        scanf("%d", &guess);
        if(guess > answer){
            printf("\nToo high!");
        } else if (guess < answer){
            printf("\nToo low!");
        } else {
            printf("Correct!");
        };
        guesses++;
    }while(guess != answer);

    printf("\nAnswer: %d", answer);
    printf("\nGuesses: %d\n", guesses);

    return 0;
}
