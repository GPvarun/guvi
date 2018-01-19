#include<stdio.h>
void main()
{
int v;
printf("enter the year");
scanf("%d",&v);
if(v%4==0)
{
printf(" %d is a leap year",v);
}
else
{
printf("%d is not a leap year",v);
}
}
