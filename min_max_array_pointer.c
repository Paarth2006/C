#include<stdio.h>
int main()
{
  int a[100],max,min,*p,i,n;
  p=a;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter the Elements in the Array:");
  for(i=0;i<n;i++)
  {
   scanf("%d",(p+i)); 
  }
  max=*p;
  min=*p;
  for(i=0;i<n;i++)
  {
    if(*(p+i)>max)
    {  
    max=*(p+i); 
    }
    if(*(p+i)<min)
    { 
    min=*(p+i);
    }
  }
  printf("Maximum is %d and Minimum is %d ",max,min);
  return 0;
}