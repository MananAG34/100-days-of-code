// 60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("elements of array %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    /*declaration count
    variable for
    postive,negative and zero valued elements */
    int zero_co = 0, pos_co = 0, neg_co = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 0)
        {
            zero_co += 1;
        }
        else if (array[i] < 0)
        {
            neg_co += 1;
        }
        else
        {
            pos_co += 1;
        }
    }
    printf("Positive=%d,Negative=%d,Zero=%d \n", pos_co, neg_co, zero_co);
    return 0;
}