//Q-8. WAP to swap two numbers without using third variable
#include<stdio.h>
int main()
{
	int a=10,b=20,temp;
	printf("before swap value are\t a:%d,b:%d",a,b);
	temp=a;
	a=b;
	b=temp; 
	printf("\nafter swap value are\t a:%d,b:%d",a,b);
	return 0;
}

