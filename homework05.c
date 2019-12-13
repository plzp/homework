#include <stdio.h>
#define N 5

int main()
{
    int a[N], i, min;
    printf("please enter earry\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    for (i = 1; i < N; i++)
    {
        if (min <= a[i])
        {
            min = a[0];
        }
        else
        {
            min = a[i];
        }
    }
    printf("min is %d \n",min);
   return 0;
}