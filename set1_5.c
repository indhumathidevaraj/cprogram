# cprogram#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        printf("a is grater");
    
    }
    else if(b>c)
    {
        printf("b is greater");
    }
    else
    {
        printf("c is greater");
    }
    return 0;
}
