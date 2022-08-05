//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void primenum(int a,int b)
{
    int n,i,flag=0;
    for ( n = a; n<=b; n++)
    { flag=0;
      for ( i = 2; i <=n/2; i++)
      {
        if (n%i==0)
        {
            flag=1;
        }

      }
      if (flag==0)
      {
        printf("%d ",n);
      }


    }

}
int main()
{   int x,y;
    printf("Enter two numbers :\n");
    scanf("%d%d",&x,&y);
    primenum(x,y);
}