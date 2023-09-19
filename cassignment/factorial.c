//Q-12. WAP to print factorial of given number
#include<stdio.h>
int main()
{
	int number,i,fact=1;
	printf("enter number");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
	printf("%d is factorial of %d",fact,number);
	return 0;
}

