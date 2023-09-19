// Q-15. Write a program to find out the max from given number
#include<stdio.h>
int main()
{
	int number,large=0,rem;
	printf("enter number");
	scanf("%d",&number);
	int temp=number;
	while(number!=0)
	{
		rem=number%10;
		if(rem>large)
		{
			large=rem;
		}
		number=number/10;
	}
	printf("%d is large digit %d",large,temp);
	return 0;
}

