/*Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>
struct student
{

    char name[50];
    int roll_no;
    int marks;
};
int main()
{
    struct student students[5];
    // Reading details of 5 students
    for (int i = 0; i < 5; i++)
    {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        getchar(); // to consume the newline character after scanf
    }
    // Printing details of all 5 students
    printf("\nDetails of all students:\n");
    printf("Name\t\tRoll No\tMarks\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%d\n", students[i].name, students[i].roll_no, students[i].marks);
    }
    return 0;
}