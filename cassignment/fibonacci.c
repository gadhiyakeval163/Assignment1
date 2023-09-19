//Q-13. WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3=n1+n2,i=1,end;
	printf("enter how many steps you want");
	scanf("%d",&end);
	printf("fibonacci series: %d\t%d\t%d\t",n1,n2,n3);
	while(i<=end-3)
	{
		n1=n2;
		n2=n3;
		n3=n1+n2;
		printf("%d\t",n3);
		i++;
	}
	return 0; 
}

