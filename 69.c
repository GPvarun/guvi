#include<stdio.h>
int main()
{
int v,a,r;
printf("Enter the number");
scanf("%d %d",&a,&r);
v=a-r;
if(v%2==0)
{
printf("even number");
}
else
{
printf("odd number");
return 0;
}
}
