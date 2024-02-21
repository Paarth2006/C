#include<stdio.h>
void main()
{
    int n[10],i,c,j;
    int flag=0;
    printf("Enter 10 Numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        c=0;
        flag=0;
        for (j=0;j<10;j++)
        {
            if (n[i]==n[j])
            {
                c++;
            }
        }
        for(j=i-1;j>=0;j--)
        {
            if (n[i]==n[j])
            flag=1;
            break;
        }
      if (c==1)
       {
        printf("\n%d occured only once",n[i]);
       }
    }
}