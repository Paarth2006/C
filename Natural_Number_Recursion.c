#include<stdio.h>
int natural(int);
int main()
{
    int n,n1;
    printf("Enter a Number:");
    scanf("%d",&n);
    n1 = natural(n);
    printf("%d",n1);
    return 0;
}
int natural (int n)
{
    if (n==1)
    {
        return 1;
    }
    printf("%d ", n);
    return natural(n-1);
}
