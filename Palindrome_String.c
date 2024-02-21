#include<stdio.h>
#include<string.h>
int Palindrome(char str[100]);
int main()
{
 int i,s;
 char str[100];
 printf("Enter a String : ");
 gets(str);
 s=Palindrome(str);
 if (s==1)
 {
 	printf("Palindrome");
 }
 else
 {
  printf("Not a Palindrome");
 }
return 0;
}
int Palindrome(char str[100])
{
 int i,n;
 n=strlen(str);
 for (i=0;i<n/2;i++)
 {
  if (str[i]!=str[n-i-1])
  {
    return 0;
  }
 }
 return 1;
}