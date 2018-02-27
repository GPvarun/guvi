#include <stdio.h>

int main(void) {
int b,i;
char a[10];
printf("enter the word");
scanf("%s",&a);
printf("how many times");
scanf("%d",&b);
for(i=0;i<b;i++)
{
printf("\n%s",a);
}
	return 0;
}
