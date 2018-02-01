#include <stdio.h>

int main(void) {
int a;
char b;
printf("enter value");
scanf("%d",&a);
scanf("%s",&b);
if((a>=0)&&(a<=9))
{
	printf("\nnumeric");
}
else
{
	printf("\nnot  numeric");
}
	return 0;
}
