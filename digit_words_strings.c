#include<stdio.h>
#include<string.h>
int main(char * str)
{   
    char str1[100],str2[100],str3[100];
    int i,l,m=0,n=0;
    printf("Enter the String:");
    gets(str1);
    l=strlen(str1);
    for (i=0;i<l;i++)
    {
        if (str1[i]>='0' && str1[i]<='9')
        {
            str2[m]=str1[i];
            m++;
        }
        else
        {
            str3[n]=str1[i];
            n++;
        }
    }
    str2[m]='\0';
    str3[n]='\0';
    printf("The Digit String is:");
    puts(str2);
    printf("The Character String is:");
    puts(str3);
    return 0;
}