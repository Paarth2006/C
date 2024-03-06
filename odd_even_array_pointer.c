#include <stdio.h>
int main() 
{
    int n,*p,ce=0,co=0;
    printf("Enter number of elements in the array: ");
	scanf("%d", &n);
    int arr[100];
    p=arr;
    printf("Enter %d elements in the array: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++)
    {
        if(*(p+i)%2==0)
			ce++;
    }
    for(int i=0;i<n;i++)
    {

        if(*(p+i)%2!=0)
            co++;
   }
   printf("Even numbers in the array are: %d",ce);
   printf("\nOdd numbers in the array are: %d",co);
   return 0;
}
