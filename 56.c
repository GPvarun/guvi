include <stdio.h>

int main()
{
    char n[30];
    printf("enter the numbers");
scanf("%s",&n);
if((n<='a' && n>='z') ||(n<='A' && n>='Z')||(n<='0'&& n>='9'))
{
printf("yes");
}
else 
{
printf("no");
}
    return 0;
}
