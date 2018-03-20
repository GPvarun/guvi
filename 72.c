#include <stdio.h>
int main()
{
    int i,flag=0;
    char n[10];
    gets(n);
    for(i=0;i<10;i++)
    {
    if((n[i]=='a')||(n[i]=='e')||(n[i]=='i')||(n[i]=='o')||(n[i]=='u'))
     flag=1;
    }
    if(flag==1)
    printf("yes");
    else
    printf("no");
    return 0;
}
