//10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>

int Factnum(int n)
{
    int i,fact=1;
    for ( i = 1; i <=n; i++)
    {
        fact=fact*i;

    }
    if(fact==1&&fact==0)
    {
        return 1;
    }
    return fact;
}
int seriessum()
{
    int i,sum=0;
    for ( i = 1; i <=5; i++)
    {
       sum=sum+Factnum(i)/i;
       printf("%d ",sum);
    }
return sum;
}
int main()
{
    printf(" sum =%d ",seriessum());
    return 0;
}
