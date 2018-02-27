#include <stdio.h>

int main(void) {
int a,b,c=0,i;
printf("enter the number");
scanf("%d",&a);
while(a>0)
{
 b=a%10;
 c=c+1;
 a=a/10;
 }
printf("%d",c);


	return 0;
}
