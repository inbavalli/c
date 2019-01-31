#include <stdio.h>
int main()
{
int a,b;
printf("enter the num:");
scanf("%d%d",&a,&b);
printf("%d",multiply(a,b));
getch();
}
int multiply(int a,int b)
{
int mul=0,i;
if(b<0)
{
    b=-b;
    a=-a;
}
for(i=1;i<=b;i++)
{
    mul=mul+a;
}

return mul;
}
