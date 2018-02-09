
#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[200];
    int n,count = 0, i,a;
 
   printf("enter the string.a\n");
   gets(s);
   n=strlen(s);
    for (i = 0;i<strlen(s);i++)
    {
        if (s[i] == '.')
            count++;    
    }
    printf("number of paragraph in given string are: %d\n", count);
    return 0;
}
