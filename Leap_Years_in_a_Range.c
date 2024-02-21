#include<Stdio.h>
void main()
{
    int n1,n2,i;
    printf("Enter the Starting Year:");
    scanf("%d",&n1);
    printf("Enter the Ending Year:");
    scanf("%d",&n2);
    printf("Leap Years between %d and %d are:",n1,n2);
    for(i=n1;i<=n2;i++)
        {
           if (i%4==0 && i%100!=0 || i%400==0)
            {
                printf("%d ",i); 
                
            }   
        } 
}
