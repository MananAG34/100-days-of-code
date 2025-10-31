// 18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
/* 90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.

Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F */
#include <stdio.h>
int main()
{
    int percentage;
    printf("enter percentage: ");
    scanf("%d", &percentage);
    switch (percentage / 10)
    {
    case 10:
    case 9:
        printf("Grade A \n");
        break;
    case 8:
        printf("Grade B \n");
        break;
    case 7:
        printf("Grade C \n");
        break;
    case 6:
        printf("Grade D \n");
        break;
    default:
        printf("Grade F \n");
    }
    return 0;
}