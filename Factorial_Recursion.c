#include<stdio.h>
int fact(int);
int main()
{
    int n,f;
    printf("Enter a Number:");
    scanf("%d",&n);
    f = fact(n);
    printf("%lld",f);
    return 0;
}
 int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    return (n*fact(n-1));
}