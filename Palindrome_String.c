#include<string.h>
#include<stdio.h>
int palindrome(char * str1)
{
    int i,j,l,c;
    l=strlen(str1);
    j=l-1;
    for (i=0;i<l/2;i++,j--)
    {
        if (str1[i]==str1[j])
        {
            c=1;
        }
        else
        {
            c=0;
        }
    }
    return c;
}
int main()
{
    char str1[100];
    int p,l;
    printf("Enter the String:");
    gets(str1);
    l=strlen(str1);
    p=palindrome(str1);
    if (p==1)
    {
        printf("The String is a palindrome");
    }
    else
    {
        printf("The String is not a Palindrome");
    }
}