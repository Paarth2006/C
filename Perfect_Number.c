#include<stdio.h>
void main()
{
    int i,n,factors=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        if (n%i==0)
        {
            factors=factors+i;
        }
            
    }   
    if (n==factors)
        {
            printf("%d is a Perfect Number",n);
        } 
    else   
        printf("%d is not a Perfect Number",n);
}