//a program to determine the discount given
#include<stdio.h>
int main() 
{
int amount, discount;
printf("enter the amount");
scanf("%d" ,& amount);
discount=amount*0.1;
if(amount >1000)
{
printf("%d", discount);
}
else
{
printf("no discount ");
return 0;
}
}