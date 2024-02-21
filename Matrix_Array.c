#include<stdio.h>
void main()
{
    int m1[2][2],m2[2][2],i,j,sum[2][2];
    for(i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            
            printf("Enter elements of matrix 1:",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter elements of matrix 2:",i,j);
            scanf("%d",&m2[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            sum[i][j]=m1[i][j]+m2[i][j];
        }
    }
    printf("The New Matrix Sum is:");
    printf("\n");
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}

