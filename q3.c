// Write a program to calculate the area and perimeter of a rectangle given its length and breadth
#include <stdio.h>
int main()
{
    int i, j;
    printf("enter length and breadth of a rectangle: ");
    scanf("%d %d", &i, &j);
    printf("area:%d and  perimeter:%d \n", i * j, 2 * (i + j));
}