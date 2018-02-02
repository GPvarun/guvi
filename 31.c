#include <stdio.h>
int main()
{
    int n,n1,n2,n3;
    char a[10],b[10],c[100];
    scanf("%c %c %c",&a,&b,&c);
    n1=strlen(a);
    n2=strlen(b);
    n3=strlen(c);
    n=n1+n2+n3;
    printf("%d",n);
    return 0;
}



