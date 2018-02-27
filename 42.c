#include <stdio.h>

int main(void) {
int c,d;
char a[10],b[10];
printf("enter the word");
scanf("%s",&a);
printf("enter the word");
scanf("%s",&b);
c=strlen(a);
d=strlen(b);
if(c<d)
{
printf("\n%s",b);
}
else
{
    printf("\n%s",a);
}
	return 0;
}
