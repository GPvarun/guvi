#include <stdio.h>
int main(void) {
int a,b,c;
printf("enter the numbers");
scanf("%d%d%d",&a,&b,&c);
if((a<b)&&(b<c))
{
printf("%d",b);
}
else if((b<a)&&(a<c))
{
	printf("%d",a);
}
else
{
	printf("%d",c);
}
	return 0;
}
