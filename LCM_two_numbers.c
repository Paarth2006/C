#include<stdio.h>
void main()
{
    int n1,n2,i,hcf,lcm;
    printf("Enter First Number:");
    scanf("%d",&n1);
    printf("Enter Second Number:");
    scanf("%d",&n2);
    for (i=1;i<=n1 ;i++)
    {
        if (n1%i==0 && n2%i==0)
        {
           hcf=i;
        }
    }
    lcm=(n1*n2)/hcf;
    printf("LCM of %d and %d is %d",n1,n2,lcm);
}
