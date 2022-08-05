//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fibonnaci(int n)
{
    int i,a=-1,b=1,sum=0;
    for ( i = 1; i <=n; i++)
    {
      sum=a+b;
      printf("%d ",sum);
      a=b;
      b=sum;
    }
    
}
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    fibonnaci(x);
    return 0;
    }