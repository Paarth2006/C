#include<stdio.h>
void main()
{
    int i,n,mul;
    printf("Enter a Number:");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        mul=i*n;
        printf("%d X %d= %d\n",n,i,mul);
    }
}