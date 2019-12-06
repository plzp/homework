#include <stdio.h>
#include <math.h>

int isprime(int x) 
{
    int n;
    for (n = 2; n < sqrt(x); n++)
    {
        if (x%n == 0)
        {
            break;
        }
    }
    if (n >sqrt (x) )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int i, flag;
    printf("enter i\n");
    scanf("%d", &i);
    flag = isprime(i);

    if (flag == 1)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
