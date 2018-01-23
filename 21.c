#include<stdio.h>
#include<math.h>
int main() {
	int v,d,n,i,tn;
	int sum=0;
	printf("Enter the first number of the A.P. series: ");
	scanf("%d",&v);
	printf("Enter the total numbers in the A.P. series: ");
	scanf("%d",&n);
	printf("Enter the common difference of A.P. series: ");
	scanf("%d",&d);
	sum = ( n * ( 2 * v + ( n -1 ) * d ) )/ 2;
	tn = v + (n-1) * d;
	printf("Sum of the series A.P.: ");
	for (i=v;i<=tn; i= i + d ) {
		if (i != tn)
		             printf("%d + ",i); else
		             printf("%d = %d ",i,sum);
	}
	return 0;
}
