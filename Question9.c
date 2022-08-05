//9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
void numsquare(int a)
{
    printf("the square of %d is %d",a,a*a);

}
int main()
{  
    int n;
    printf("Enter a Number :  ");
    scanf("%d",&n);
    numsquare(n);
}