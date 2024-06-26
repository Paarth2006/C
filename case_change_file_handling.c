#include<stdio.h>
int main()
{
    FILE *p,*n;
    char ch;
    p=fopen("characters.txt","w+");
    n=fopen("new.txt","w+");
    if (p!=NULL && n!=NULL)
    {   
        printf("Enter the characters in the text file:\n");
        while((ch=getchar())!=EOF)
        {
            fputc(ch,p);
        }
        rewind(p);
        while((ch=fgetc(p))!=EOF)
        {
           if (ch >= 'A' && ch <= 'Z')
            {
                ch = ch + 32; 
                fputc(ch, n);
            }
            else if (ch >= 'a' && ch <= 'z')
            {
                ch = ch - 32; 
                fputc(ch, n);
            }
        }
        rewind(p);
        rewind(n);
        printf("Content of Original Text File:\n");
        while((ch=fgetc(p))!=EOF)
        {
            printf("%c",ch);
        }
        printf("\n");
        printf("Contents of New Text File:\n");
        while((ch=fgetc(n))!=EOF)
        {
            printf("%c",ch);
        }
        fclose(p);
        fclose(n);
    }
    else
    {
        printf("Error opening file");
    }
return 0;
}