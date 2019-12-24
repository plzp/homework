#include<stdio.h>

int main()
{
   int a,b,c,n;
   for (n=100;n<1000;n++)
   {
       a=n%10;
       b=n/100;
       c=(n-b*100)/10;
       if(a*a*a+b*b*b+c*c*c==n)
       {
           printf("%d\n",n);
       }
   }
    return 0;
}