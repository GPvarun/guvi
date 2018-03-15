#include <stdio.h>

void main()
{
	int v;
	printf("enter the number:");
	scanf("%d",&v);
	v=v+1;
	while(v%10!=0)
	{
		v=v+1;
	}
	printf("%d",v);
}
