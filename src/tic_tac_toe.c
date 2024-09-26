#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'O';
const char COMPUTER = 'X';



void reset_board();
void print_board();
int check_free_spaces();
void player_move();
void computer_move();
char check_winner();
void print_winner(char);

int main(){

    char winner = ' ';

    reset_board();
    while(winner == ' ' && check_free_spaces() != 0){
        print_board();

        player_move();
        winner = check_winner();
        if(winner != ' ' || check_free_spaces() == 0){
            break;
        }

        computer_move();
        winner = check_winner();
        if(winner != ' ' || check_free_spaces() == 0){
            break;
        }
    }

    print_board();
    print_winner(winner);

    return 0;
}

void reset_board(){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            board[row][col] = ' ';
        }
    }
}
void print_board(){

    printf(" 1 | 2 | 3 \n");
    printf("-----------\n");

    for(int row = 0; row < 3; row++){
        printf(" %c | %c | %c | %d\n", board[row][0],board[row][1],board[row][2], row + 1);
        if (row != 2){
            printf("---+---+---|\n");
        }
    }

}
int check_free_spaces(){
    int free_spaces = 9;

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            if(board[row][col] != ' '){
                free_spaces--;
            }
        }
    }
    return free_spaces;
}
void player_move(){

    int x;
    int y;
    do {
        printf("Enter row number (1-3) > ");
        scanf("%d", &x);
        x--;
        getchar();
        printf("Enter column number (1-3) > ");
        scanf("%d", &y);
        y--;

        if (x > 2 || x < 0){
            printf("Invalid move!\n");
            continue;
        } 
        if (y > 2 || y < 0){
            printf("Invalid move!\n");
            continue;
        } 

        if(board[x][y] != ' '){
            printf("Invalid move!\n");
        } else{
            board[x][y] = PLAYER;
            break;
        }
    }while (board[x][y] != ' ');



}
void computer_move(){

    srand(time(0));

    int x;
    int y;

    if(check_free_spaces() > 0){
        do{
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');

        board[x][y] = COMPUTER;
    } else{
        print_winner(' ');
    }

}
char check_winner(){

    for(int row = 0; row < 3; row++){
        if(board[row][0] == board[row][1] && board[row][1] == board[row][2]){
            return board[row][0];
        }
    }

    for(int col = 0; col < 3; col++){
        if(board[0][col] == board[1][col] && board[1][col] == board[2][col]){
            return board[0][col];
        }
    }

    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        return board[0][0];
    }
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        return board[0][2];
    }

    return ' ';
}
void print_winner(char winner){
    if(winner == PLAYER){
        printf("YOU WIN!\n");
    } else if (winner == COMPUTER){
        printf("YOU LOSE!\n");
    } else{
        printf("IT'S A TIE!\n");
    }
}
