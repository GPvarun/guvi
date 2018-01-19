#include<stdio.h>
void main()
{
    int g,p,v;
    printf("enter the values");
    scanf("%d%d%d",&g,&p,&v);
    if(g>p)
    {
        if(g>v)
        {
        printf("%d largest number",g);
        }
    }
        else if(p>v)
        {
            printf("%d largest number",p);
        }
        else
        {
            printf("%d largest number",v);
        }
    }
