/*Q147: Store employee data in a binary
file using fwrite() and
read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    FILE *fp;
    struct Employee emp[2], emp_read[2];
    int i, n = 2;

    // Input employee details
    for (i = 0; i < n; i++)
    {
        printf("Enter id, name and salary for employee %d:\n", i + 1);
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
    }

    // Write employees to binary file
    fp = fopen("employees.dat", "wb");
    if (fp == NULL)
    {
        printf("Error opening file for writing\n");
        return 1;
    }
    fwrite(emp, sizeof(struct Employee), n, fp);
    fclose(fp);

    // Read employees back from file
    fp = fopen("employees.dat", "rb");
    if (fp == NULL)
    {
        printf("Error opening file for reading\n");
        return 1;
    }
    fread(emp_read, sizeof(struct Employee), n, fp);
    fclose(fp);

    // Display employees read from file
    printf("\nEmployee details read from file:\n");
    for (i = 0; i < n; i++)
    {
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp_read[i].id, emp_read[i].name, emp_read[i].salary);
    }

    return 0;
}
