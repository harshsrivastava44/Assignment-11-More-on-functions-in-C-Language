////8. Write a function to print PASCAL Triangle. (TSRN)
#include <stdio.h>

int Factnum(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    if (fact == 1 && fact == 0)
    {
        return 1;
    }
    return fact;
}
int comb(int n, int r)
{
    int comb;
    comb = Factnum(n) / (Factnum(r)*Factnum(n - r));
    return comb;
}
void pascal(int n)
{
    int i, j, k, r;
    for (i =1; i<=n;i++)
    {
        k = 1;
        r = 0;
        for (j = 1;j<=(2*n-1);j++)
        {
            if (j>=((n+1)- i) && j<=((n-1)+i) &&k)
            {
                printf("%2d", comb(i-1,r));
                k =0;
                r++;
            }
            else
            {
                printf("  ");
                k = 1;
            }
        }
        printf("\n");
    }
}
int main()
{
    int x;
    printf("enter a number :\n");
    scanf("%d", &x);
    pascal(x);
}
