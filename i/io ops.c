/* Program for demonstrating input and output operations */
#include <stdio.h>

int main()
{
    int age;
    float avg_marks;
    char name[10];

    printf("Enter student's name: ");
    scanf("%9s", name);   // limit prevents overflow

    printf("Enter student's age: ");
    scanf("%d", &age);

    printf("Enter student's average marks: ");
    scanf("%f", &avg_marks);

    printf("\nThe student details are:\n");
    printf("Name: %s", name);
    printf("\nAge: %d", age);
    printf("\nAverage Marks: %.2f", avg_marks);

    return 0;
}
