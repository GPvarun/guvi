#include <stdio.h>

int main(void) {
int a,b,c;
printf("enter the time and minutes");
scanf("%d ",&a);
b=a%60;
c=a/60;
printf("\n%d hours %d min",c,b);
}
