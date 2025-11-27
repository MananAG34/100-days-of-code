/*Q143: Find and print the student with the
highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }

    int topIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (students[i].marks > students[topIndex].marks)
        {
            topIndex = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[topIndex].name, students[topIndex].marks);

    return 0;
}
