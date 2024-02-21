#include<stdio.h>
void main()
{
    int n,i,n1=1;
    printf("Enter the Size of the array:");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        printf("Enter the %d element of the Array:",n1);
        scanf("%d",&arr[i]);    
        n1++;
    }
    int pos;
    printf("Enter the Postion From which the Element has to be deleted:");
    scanf("%d",&pos);
    for (i=pos-1;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    n=n-1;
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);   
    }
}

