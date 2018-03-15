#include<stdio.h>
int main()
{
int i,n,c=1;
scanf("%d",&n);
for(i=1;i<n;i++)
{
    if(n%i==0)
    {
        c++;
    }
}

if(c==2)
{
    printf("is prime");
}
else
{
    printf("is not prime");
}
return 0;
}
