#include<stdio.h>
#include<string.h>
void concat(char* str, char* str2)
{
    int i;
    int j = strlen(str);
    for (i = 0; str2[i] != '\0'; i++)
    {
        str[i + j] = str2[i];
    }
    str[i + j] = '\0';
    return;
}
int main()
{
    int i;
    char str[100];
    char str2[100];
    printf("Enter the First String:");
    gets(str);
    printf("Enter the Second String:");
    gets(str2);
    concat(str,str2);
    printf("Concatenated String is: '%s'\n", str);
    return 0;
}