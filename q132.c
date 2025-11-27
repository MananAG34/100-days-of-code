/*Q132: Define an enum for traffic lights
(RED, YELLOW, GREEN) and
print 'Stop', 'Wait', or 'Go' based on its value.
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>

enum TrafficLight
{
    RED = 1,
    YELLOW,
    GREEN
};

int main()
{
    int input;
    enum TrafficLight light;

    printf("Enter traffic light color (1 for RED, 2 for YELLOW, 3 for GREEN): ");
    scanf("%d", &input);

    if (input == 1)
    {
        light = RED;
    }
    else if (input == 2)
    {
        light = YELLOW;
    }
    else if (input == 3)
    {
        light = GREEN;
    }
    else
    {
        printf("Invalid input\n");
        return 1;
    }

    switch (light)
    {
    case RED:
        printf("Stop\n");
        break;
    case YELLOW:
        printf("Wait\n");
        break;
    case GREEN:
        printf("Go\n");
        break;
    default:
        printf("Unknown light\n");
    }

    return 0;
}
