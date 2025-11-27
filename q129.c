/*Q129: A file numbers.txt contains a list of
 integers separated by spaces. Read all integers,
 compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main()
{
    char filename[100];
    FILE *file;
    int num, count = 0;
    long long sum = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1)
    {
        sum += num;
        count++;
    }

    fclose(file);

    if (count > 0)
    {
        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", (double)sum / count);
    }
    else
    {
        printf("No integers found in the file.\n");
    }

    return 0;
}
