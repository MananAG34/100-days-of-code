/*Q133: Create an enum for months and print how many days each month has.
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>

enum Months
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main()
{
    int month;
    printf("Enter month number (1 for JAN, 2 for FEB, ..., 12 for DEC): ");
    scanf("%d", &month);

    switch (month)
    {
    case JAN:
    case MAR:
    case MAY:
    case JUL:
    case AUG:
    case OCT:
    case DEC:
        printf("31 days\n");
        break;
    case APR:
    case JUN:
    case SEP:
    case NOV:
        printf("30 days\n");
        break;
    case FEB:
        printf("28 or 29 days\n");
        break;
    default:
        printf("Invalid month\n");
    }

    return 0;
}
