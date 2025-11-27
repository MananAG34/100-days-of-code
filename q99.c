/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char date[11];    // Format: dd/mm/yyyy
    char newDate[12]; // Format: dd-MMM-yyyy
    printf("enter date in dd/mm/yyyy format: ");
    scanf("%10s", date);
    // Extract day, month, and year
    char day[3], month[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';
    // Convert month number to month abbreviation
    char monthAbbr[4];
    if (strcmp(month, "01") == 0)
        strcpy(monthAbbr, "Jan");
    else if (strcmp(month, "02") == 0)
        strcpy(monthAbbr, "Feb");
    else if (strcmp(month, "03") == 0)
        strcpy(monthAbbr, "Mar");
    else if (strcmp(month, "04") == 0)
        strcpy(monthAbbr, "Apr");
    else if (strcmp(month, "05") == 0)
        strcpy(monthAbbr, "May");
    else if (strcmp(month, "06") == 0)
        strcpy(monthAbbr, "Jun");
    else if (strcmp(month, "07") == 0)
        strcpy(monthAbbr, "Jul");
    else if (strcmp(month, "08") == 0)
        strcpy(monthAbbr, "Aug");
    else if (strcmp(month, "09") == 0)
        strcpy(monthAbbr, "Sep");
    else if (strcmp(month, "10") == 0)
        strcpy(monthAbbr, "Oct");
    else if (strcmp(month, "11") == 0)
        strcpy(monthAbbr, "Nov");
    else if (strcmp(month, "12") == 0)
        strcpy(monthAbbr, "Dec");
    else
        strcpy(monthAbbr, "Invalid"); // Handle invalid month
    // Construct new date format
    snprintf(newDate, sizeof(newDate), "%s-%s-%s", day, monthAbbr, year);
    printf("Date in dd-MMM-yyyy format: %s\n", newDate);
    return 0;
}