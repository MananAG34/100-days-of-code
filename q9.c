// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h> // Required for pow() function

int main()
{
    float princ, rate, time;
    float comp_int;

    // Get input from the user
    printf("Enter the principal amount: ");
    scanf("%f", &princ);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate Compound Interest
    // Formula: CI = P * (1 + R/100)^T - P
    comp_int = princ * pow((1 + rate / 100), time) - princ;

    // Display the results
    printf("Simple Interest = %.2f\n", (princ * rate * time) / 100);
    printf("Compound Interest = %.2f\n", comp_int);

    return 0;
}
