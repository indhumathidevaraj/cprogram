# cprogram#include <stdio.h>

int main()
{
    int ch;
    printf("enter ch");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("alphabet");
    
    }
    else
    {
        printf("number");
    }
    return 0;
}
