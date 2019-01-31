#include <stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
 ((n&1)&&printf("no is odd"))||
 printf("no is even");
return 0;
}
