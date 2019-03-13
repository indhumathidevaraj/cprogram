#include <stdio.h>

int main()
{
char s[20];
int i,l;
printf("enter the s");
scanf("%s",s);
l=strlen(s);
for(i=l;i>=0;i--)
{
    printf("%c",s[i]);
}

    return 0;
}
