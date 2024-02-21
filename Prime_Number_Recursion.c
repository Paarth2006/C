#include<stdio.h>
int prime(int,int);
int main()
{
    int n,p;
    printf("Enter a Number:");
    scanf("%d",&n);
    p = prime(n/2,n);
    printf("%d",p);
    return 0;
}
int prime(int i, int n)
{
    if (i==1)
    {
        return 1;
    }
    if (n%i==0)
    {
        return 0;
    }
    return prime(i-1,n);
}