#include<stdio.h>
void main()
{
    int n[10],i,j,temp;
    printf("Enter 10 Numbers:");
    for (i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    for (i=0;i<10;i++)
    {
        for (j=i+1;j<10;j++)
        {
            if (n[i]>n[j])
            {
                temp=n[i];
                n[i]=n[j];
                n[j]=temp;
            }
            
        }
    }
    printf("Sorted Array:\n");
    for (i=0;i<10;i++)
    {
        printf("%d ",n[i]);
    }
}
