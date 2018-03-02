#include <stdio.h>

int main()
{
    int n,b,c,d,e,v;
    printf("enter the numbers");
scanf("%d",&n);

{
b=n%10;
c=n/10;
d=c%10;
e=n/100;
v=b+d+e;
printf("%d ",v);


   } return 0;
}
