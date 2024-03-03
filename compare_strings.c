#include<stdio.h>
#include<string.h>
int compare(char str[100], char str2[100])
{
    int i,l1,l2,c=0;
    l1=strlen(str);
    l2=strlen(str2);
    if (l1==l2)
    {
        for (i=0;str[i]!='\0';i++)
        {
            if (str[i]==str[2])
            {
                c++;
            }
        }
        if (c==l1)
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}
int main()
{
    int s;
    char str[100],str2[100];
    printf("Enter the First String:");
    gets(str);
    printf("Enter the Second String:");
    gets(str2);
    s=compare(str,str2);
    if (s==1)
    {
        printf("Equal Strings");
    }
    else
    {
        printf("Unequal Strings");
    }
    return 0;
}