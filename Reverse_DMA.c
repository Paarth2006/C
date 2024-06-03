#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,*p,t;
    printf("\t\t*****INPUT*****\n");
    printf("Enter the size of the array:");
    scanf("%d",&n);
    p = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of the array:",i+1);
        scanf("%d", (p+i));
    }
    int pos;
    printf("Enter the postion to reverse from:");
    scanf("%d",&pos);
    for (i=pos-1,j=n-1;i<j;i++,j--)
    {
        t = *(p+i);
        *(p+i) = *(p+j);
        *(p+j) = t;
    }
    printf("\t\t*****OUTPUT*****\n");
    printf("Reversed Array is :");
    for (i=0;i<n;i++)
    {
        printf("%d ",*(p+i));

    }
    free(p);
    return 0;
}