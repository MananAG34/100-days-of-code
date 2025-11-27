/*Q130: Store multiple student records (name, roll number, marks)
into a file using fprintf().
Then read them using fscanf() and
display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

int main()
{
    FILE *file;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    char name[100];
    int roll, marks;

    // Write student records to file
    file = fopen("students.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file for writing!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter Name, Roll, Marks for student %d:\n", i + 1);
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(file, "%s %d %d\n", name, roll, marks);
    }
    fclose(file);

    // Read and display student records from file
    file = fopen("students.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nStored Student Records:\n");
    while (fscanf(file, "%s %d %d", name, &roll, &marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(file);

    return 0;
}
