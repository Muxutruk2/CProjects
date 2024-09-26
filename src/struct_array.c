#include "stdio.h"
#include "string.h"

struct Student{
    char name[12];
    float gpa;
};

int main(){
    struct Student student1 = {"John", 3.0};
    struct Student student2 = {"Pork", 4.0};
    struct Student student3 = {"Xiao", 6.5};
    struct Student student4 = {"Hong", 8.0};
    struct Student student5 = {"Xoo", 9.5};

    struct Student students[] = {student1, student2, student3, student4, student5};

    for(int i = 0; i < sizeof(students) / sizeof(students[0]); i++){
        printf("%-12s%.2f\n", students[i].name, students[i].gpa);
    }
    return 0;
}
