#include <stdio.h>
int main()
{
int x,y,carry;
printf("enter the num:");
scanf("%d%d",&x,&y);
while(y!=0)
{
    carry=x&y;
    x=x^y;
    y=carry<<1;
printf("%d",x);
}
return 0;
}
