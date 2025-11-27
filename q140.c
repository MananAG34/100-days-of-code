/*Q140: Define a struct with enum Gender and print person's gender.
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>

enum Gender
{
    MALE = 1,
    FEMALE = 2
};

struct Person
{
    enum Gender gender;
};

int main()
{
    struct Person p;
    int input;

    printf("Enter gender (1 for MALE, 2 for FEMALE): ");
    scanf("%d", &input);

    if (input == 1)
    {
        p.gender = MALE;
    }
    else if (input == 2)
    {
        p.gender = FEMALE;
    }
    else
    {
        printf("Invalid input\n");
        return 1;
    }

    if (p.gender == MALE)
    {
        printf("Male\n");
    }
    else if (p.gender == FEMALE)
    {
        printf("Female\n");
    }

    return 0;
}
