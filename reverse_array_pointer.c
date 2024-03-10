#include<stdio.h>
int main()
{
 int n,arr[100],i,j,*p,t=0;
 p=arr;
 printf("Enter the Size of the array:");
 scanf("%d",&n);
 printf("Enter the %d elements of the array:",n);
 for (i=0;i<n;i++)
 {
   scanf("%d",(p+i));
 }
 for (i=0,j=n-1;i<n/2;i++,j--)
 {
  t=*(p+i);
  *(p+i)=*(p+j);
  *(p+j)=t;
 }
 printf("The Reversed Array is :");
 for (i=0;i<n;i++)
 {
  	printf("%d ",*(p+i));
 }
 return 0;
}