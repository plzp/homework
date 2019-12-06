#include <stdio.h>

int main()
{
    float distance; 
    int minute,money;
    printf("please enter distance,minute");
    scanf("%f %d ", & distance, & minute );
    if (distance <= 3)
    {
        if (minute >= 5)
        {
            money = 10 + (minute / 5) * 2;
        }
        else
        {
            money = 10;
        }
    }
    else if (distance <= 10)
    {
        if (minute >= 5)
        {
            money = 10 + (minute / 5) * 2 + (10 - distance) * 2;
        }
        else
        {
            money = 10 + (10 - distance) * 2;
        }
    }
    else if  (distance > 10)
    {
        if (minute >= 5)
        {
            money = 10 + (minute / 5) * 2 + (10 - distance) * 2 + (distance - 10) * 3;
        }
        else
        {
            money = 10 + (10 - distance) * 2 + (distance - 10) * 3;
        }
    }
    printf("money is %d", money);
    return 0;
}