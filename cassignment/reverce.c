//Q-14. WAP to print number in reverse order.
#include<stdio.h>
int main()
{
	int number,i,rem,rev=0;
	printf("enter number");
	scanf("%d",&number);
	int temp=number;
	while(number!=0)
	{
		rem=number%10;
		rev=rev*10+rem;
		number=number/10;
	}
	printf("reverce of %d is %d",temp,rev);
	return 0;
}

