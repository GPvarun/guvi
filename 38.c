#include <stdio.h>

int main(void) {
	int a,b,temp;
	printf("enter the number");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d",a);
	printf("\n%d",b);
	
	return 0;
}
