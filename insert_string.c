#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
void insertSubstring(char *str, char *sub, int index) {
    int len_str = strlen(str);
    int len_sub = strlen(sub);
    int i;
    // Shift characters to make space for the substring
    for (int i=index; i<= len_str; i++)
    {
        str[i + len_sub] = str[i];
    }
    // Insert the substring
    for (int i = 0; i < len_sub; i++) 
    {
        str[index + i] = sub[i];
    }
    str[i]='\0';
}
int main() {
    char string[MAX_LENGTH];
    char substring[MAX_LENGTH];
    int index;
    printf("Enter a string: ");
    gets(string);
    printf("Enter a substring: ");
    gets(substring);
    printf("Enter the index where the substring should be inserted: ");
    scanf("%d", &index);
    printf("Modified string: %s\n", string);
    return 0;
}