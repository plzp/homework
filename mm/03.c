#include<stdio.h>
#define N 5

int main()
{
    int a[N], i, j, temp;
    printf("please enter earry\n");
    for (i = 0; i < N ; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < N - 1; i++)
        for (j = i + 1; j < N; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

    for (i = 0; i < N; i++)
    {
        printf("%3d", a[i]);
    }

    return 0;
}