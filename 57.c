#include<stdio.h>

int main()
{
int a,b,t=0;
scanf("%d",&a);
scanf("%d",&b);
t=a;
a=b;
b=t;
printf("%d %d",a,b);
    return 0;
}
