#include <stdio.h>
#include <string.h>

// typedef char user[25];

// WITHOUT TYPEDEF
// struct User {
//     char name[25];
//     char password[12];
//     int id;
// };

// WITH TYPEDEF
typedef struct {
    char name[25];
    char password[12];
    int id;
} User;

void print(User user){
    printf("%s:\n", user.name);
    printf("\tPassword: %s\n", user.password);
    printf("\tID: %d\n", user.id);
}

int main(){
    // WITHOUT TYPEDEF
    // struct User user1 = {"Bro", "password1234", 1};

    // WITH TYPEDEF
    User user1 = {"John", "password1234", 1};
    User user2 = {"Pork", "ILovePork123", 2};

    print(user1);
    print(user2);

    return 0;
}
