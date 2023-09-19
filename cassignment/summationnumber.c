//Q-16. WAP make a summation of given number
#include<stdio.h>
int main()
{
	int n,t,sum=0,remainder;
	printf("enter a interger\n");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		remainder=t%10;
		sum=sum+remainder;
		t=t/10;
	}
	printf("sum of digits of %d=%d\n",n,sum);
	return 0;
}
