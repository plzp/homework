#include <stdio.h>

int main(void)
{
    int sum = 0, i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("sum is %d\n", sum);
    return 0;
}