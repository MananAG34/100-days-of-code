/*Q137: Create an enum for user roles (ADMIN, USER, GUEST)
 and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
enum role
{
    ADMIN = 1,
    USER,
    GUEST
};
int main()
{
    enum role n;
    printf("enter your role: (ADMIN=1, USER=2, GUEST=3)");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("You're the admin you have power.");
        break;
    case 2:
        printf("You're the user you have less power.");
        break;
    case 3:
        printf("You're the guest you have no power.");
        break;
    }
    return 0;
}