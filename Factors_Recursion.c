#include<stdio.h>
int Fact(int,int);
int main()
{
    int i,n,f;
    printf("Enter a Number:");
    scanf("%d",&n);
    f = Fact(n,n/2);
    printf("%d",&f);
    return 0;
}
int Fact(int n, int i)
{
    if (n==0)
    {
        return 0;
    }
    if (n%i==0)
    {
        printf("%d ",i);
    }
    return Fact(n,i-1);
}