#include <stdio.h>

int main()
{

int a,i;
printf("enter the a");
scanf("%d",&a);
for(i=1;a>10;i++)
{
a=a/10;
}
printf("%d",i);
return 0;
}
