#include <stdio.h>
 
int main()
{
    char    str[100];
    int countDigits,countAlphabet,spc,countSpaces;
    int counter;
    countDigits=countAlphabet=spc=countSpaces=0;
 
    printf("Enter a string: ");
    gets(str);
 
    for(counter=0;str[counter]!=NULL;counter++)
    {
 
        if(str[counter]>='0' && str[counter]<='9')
            countDigits++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            countAlphabet++;
        else if(str[counter]==' ')
            countSpaces++;
        else
            spc++;
    }
 
    printf(" \nSpecial Char: %d",spc);
 
    return 0;
}
