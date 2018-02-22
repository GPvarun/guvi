#include <stdio.h>

int main(void) {
	int a,b,v;
	printf("enter the number");
	scanf("%d %d",&a,&b);
	v=a;
	a=b;
	b=v;
	printf("\n%dafter swap",a);
	printf("\n%d",b);
	
	return 0;
}
