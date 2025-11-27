/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT,
 and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>

enum OPERATION
{
    SUCCESS = 1,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum OPERATION myVar;
    printf("enter m ");
    scanf("%d", &myVar);

    switch (myVar)
    {
    case 1:
        printf("operation resulted in success \n");
        break;
    case 2:
        printf("operation resulted in failure \n");
        break;
    case 3:
        printf("operation finished with a timeout \n");
        break;
    }

    return 0;
}