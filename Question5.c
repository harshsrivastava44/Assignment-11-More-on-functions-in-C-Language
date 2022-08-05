//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void primenum(int n)
{
    int a,i,flag=0;
    for ( a = 2; a<=n; a++)
    { flag=0;
      for ( i = 2; i <=a/2; i++)
      {
        if (a%i==0)
        {
            flag=1;
        }

      }
      if (flag==0)
      {
        printf("%d ",a);
      }


    }

}
int main()
{   int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    primenum(x);
}
