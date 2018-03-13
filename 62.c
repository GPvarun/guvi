#include<stdio.h>
#include<string.h>
void main()
{
char s[100]={"10001"};
int i,n=5,flag=0;
for(i=0;i<n;i++)
{
if(s[i]=='0'||s[i]=='1')
{
flag=1;
}
else
{
flag=0;
break;
}
}
if(flag==1)
printf("given string is binary");
else
printf("not a binary");
}
