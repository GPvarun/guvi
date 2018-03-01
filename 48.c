#include <stdio.h>

int main(void) {
int a[5],b,n,i,j;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
b=n/2;
printf("%d",a[b]);

	return 0;
}
