#include <stdio.h>
#include <math.h>
int main()
{
    int a, b,count=0;
    for (a = 2; a <= 500; a++)
    {
        for (b = 2; b <= sqrt(a); b++)
            if (a % b == 0)
                break;
        if (b > sqrt(a))
        {
            printf("%5d\n", a);
            count++;
        }
        if(count%10==0)
        printf("\n");

        return 0;
    }
}