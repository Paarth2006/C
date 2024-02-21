#include<stdio.h>
void main()
{
    int min,max,n[10],i;
    printf("Enter 10 Numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    min=n[0];
    max=n[0];
    for (i=1;i<10;i++)
    {
        if (n[i]<min)
        {
            min=n[i];
        }
        if (n[i]>max)
        {
            max=n[i];
        }
    }
    printf("Minimum Element is %d\n",min);
    printf("Maximum Element is %d",max);
}
