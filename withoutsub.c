#include <stdio.h>
int main()
{
int a,b,c;
printf("enter the num:");
scanf("%d%d",&a,&b);
c=a+(~b+1);
printf("%d",c);
return 0;
}
