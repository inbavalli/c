#include <stdio.h>
int main()
{
int num, rem,reverse = 0,sum=0,count=0;
printf("Enter an integer \n");
scanf("%d", &num);
//temp = num;
while (num > 0)
{
rem = num % 10;
sum=sum+rem;
reverse = reverse * 10 + rem;
count++;
num = num/10;
}


printf("%d %d %d ",reverse,sum,count);
/*if (temp == reverse)
printf("Number is a palindrome \n");
else
printf("Number is not a palindrome \n");
*/
return 0;
}
