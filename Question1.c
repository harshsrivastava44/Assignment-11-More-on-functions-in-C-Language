//1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM(int,int);
int main()
{
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    printf("LCM is %d",LCM(x,y));
}
int LCM(int a,int b)
{   int i;
    for ( i = 1; i < a*b; i++)

    { 
        if (i%a==0 && i%b==0)
        {
           break;
        }
        
    }
    return i;
}