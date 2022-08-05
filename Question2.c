// 2. Write a function to calculate HCF of two numbers. (TSRS)
#include <stdio.h>
int HCF(int, int);
int HCF(int a, int b)
{
    int i, HCF = 1, min;
    min = a > b ? a : b;
    for (i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            HCF = i;
        }
    }
    return HCF;
}
int main()
{
    int x, y;
    printf("Enter two Numbers: \n");
    scanf("%d%d", &x, &y);
    printf("The HCF is %d", HCF(x, y));
}
