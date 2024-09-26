#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][100] = {
        "1. What year did the C language debut?",
        "2. Who is credited with creating C?",
        "3. What is the predecessor of C?"
    };

    char options[][100] = {
        "A. 1969", "B. 1972","C. 1983", "D. 1999",
        "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmak", "D. John Pork",
        "A. Objective C", "B. B", "C. C++", "D. C#",
    };

    char answers[3] = {
        'B', 'A', 'B'
    };

    int len_questions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("Quiz game! \n");

    for(int i = 0; i < len_questions; i++){
        printf("%s\n", questions[i]);
        for(int j = (i * 4); j < (i * 4) + 4; j++){
            printf("\t%s\n", options[j]);
        }
        printf("Your guess > ");
        scanf("%c", &guess);
        getchar();

        guess = toupper(guess);

        if(guess == answers[i]){
            printf("Correct!\n");
            score++;
        } else{
            printf("Incorrect! The answer was %c\n", answers[i]);
        }
    }

    printf("FINAL SCORE: %d/%d\n", score, len_questions);

    return 0;
}
