//Q-17. WAP you have to make a summation of first and last digit.
#include<stdio.h>
int main()
{
	int n,sum=0,firstdigit,lastdigit;
	printf("enter number first and last digit");
	scanf("%d",&n);
	lastdigit=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	firstdigit=n;
	sum=firstdigit+lastdigit;
	printf("sum of first and last digit=%d",sum);
	return 0;
}
