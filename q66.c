//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include<stdio.h>
int main(){
    int n;
    printf("enter number of elements of array: ");
    scanf("%d",&n);
    int array[n+1]; // create array of size n+1 to accommodate new element
    for(int i = 0;i<n;i++)
    {
        printf("enter element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    int element;
    printf("enter element to insert: ");
    scanf("%d",&element);
    int i;
    // find the position to insert the new element
    for(i = n - 1; (i >= 0 && array[i] > element); i--)
    {
        array[i + 1] = array[i]; // shift elements to the right
    }
    array[i + 1] = element; // insert the new element at the found position
    printf("Array after insertion: ");
    for(int j = 0;j<=n;j++)
    {
        printf("%d ",array[j]);
    }
    printf("\n");
    return 0;
}