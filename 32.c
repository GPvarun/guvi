#include <stdio.h>
int main()
{
int len;
char strs[20], count=0, i;
printf("Write a sentence : ");
scanf("%s",&strs);
len=strlen(strs);
for(i=0; i<len; i++)
{
if(strs[i]==' ')
{
count++;
}
printf("%d",count);
}


