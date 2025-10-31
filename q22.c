// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main()
{
    int cp, sp;
    printf("enter cost price and selling price: ");
    scanf("%d %d", &cp, &sp);
    if (sp > cp)
    {
        float profit = sp - cp;
        float profit_percent = (profit / cp) * 100;
        printf("Profit %.2f%% \n", profit_percent);
    }
    else if (sp < cp)
    {
        float loss = cp - sp;
        float loss_percent = (loss / cp) * 100;
        printf("Loss %.2f%% \n", loss_percent);
    }
    else
    {
        printf("No Profit No Loss \n");
    }
    return 0;
}
