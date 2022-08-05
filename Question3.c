//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int primenum(int);
int main()
{   int n;
     printf("Enter the number");
     scanf("%d",&n);
     printf(" %d",primenum(n));
     return 0;
}
int primenum(int a)
{
    int i,x,flag=0;
   for ( i = 2; i <=a/2 ; i++)
        {
            flag=0;
           if(a%i==0)
           {
            flag=1;
           }
        }
        if (flag==0)
       {
           printf("Prime number");
           x=a;
         return x;
       }
       else
        return 0;


}
