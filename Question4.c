// 4. Write a function to find the next prime number of a given number. (TSRS)
#include <stdio.h>
int nxtprimenum(int n)
{
    int a, i, flag = 0;
    for (a = n; 1; a++)
    {
        flag = 0;
        for (i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                flag = 1;
            }
        }
          if (flag==0){
        return a;
        break;}
}
    }

int main()
{
    int x;
    printf("enter a number :\n");
    scanf("%d",&x);
    printf("the next prime number is %d",nxtprimenum(x));
    return 0;
}
