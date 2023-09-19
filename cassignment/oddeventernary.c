//Q-9 WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
	int a=10,b=20;
	int num;
	printf("enter a integer");
	scanf("%d",&num);
	if(num %2==0)
	{
		printf("%d is even",num);
	}
	else
	{
		printf("%d is odd",num);
	}
	return 0;
}

