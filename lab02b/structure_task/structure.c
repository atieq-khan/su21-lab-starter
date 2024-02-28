
#include <stdio.h>
#include "student.h"

int main() {
    // Declare a variable of type struct Student
    struct Student student;

    printf("Enter student name: ");
    scanf("%s", student.name);

    printf("Enter student ID: ");
    scanf("%d", &student.id);

    printf("Enter student age: ");
    scanf("%d", &student.age);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("ID: %d\n", student.id);
    printf("Age: %d\n", student.age);

    return 0;
}
