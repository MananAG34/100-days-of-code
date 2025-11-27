/* Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

// Function to find and return the top student
struct Student getTopStudent(struct Student students[], int n)
{
    int i, topIndex = 0;
    for (i = 1; i < n; i++)
    {
        if (students[i].marks > students[topIndex].marks)
        {
            topIndex = i;
        }
    }
    return students[topIndex];
}

int main()
{
    struct Student students[3];
    int i;

    printf("Enter details of 3 students (Name Roll Marks):\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%49s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    struct Student topStudent = getTopStudent(students, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", topStudent.name, topStudent.roll_no, topStudent.marks);

    return 0;
}
