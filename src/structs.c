#include "stdio.h"
#include "string.h"

struct Player{
    char name[12];
    int score;
};

int main(){
    
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "John");
    player1.score = 5;

    strcpy(player2.name, "Jon");
    player1.score = 2;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);
    return 0;
}
