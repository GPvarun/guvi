#include<stdio.h>
void main()
{
char str[30];
int i=0,count=0;
  printf("enter the string");
  scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
if(isdigit(str[i]))
{
++count;
}
}
printf("no of digits is %d ",count);
}
