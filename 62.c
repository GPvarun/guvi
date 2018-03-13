

#include <stdio.h>

int main()
{
    int i,n,count=0;
    char a[100];
    printf("enter the number");
    scanf("%s",&a[100]);
    n=strlen(a);
for(i=0;i<n;i++)
{
    if((n=='0')||(n=='1'))
{
 count++;   
}
}
if(n==count)
{
printf("is binary");
}
else
{
printf("is not binary");
 }   return 0;
}
