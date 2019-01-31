#include <stdio.h>
int main()
{
int a,b,mod,q;
printf("enter the num:");
scanf("%d%d",&a,&b);
q=a/b;
mod=a-b*q;
printf("%d",mod);
return 0;
}
