//Q-26.WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
int main()
{
	int n,reversed=0,remainder,original;
	printf("enter a intiger:");
	scanf("%d",&n);
	while(n!=0){
		remainder=n%10;
		reversed=reversed*10+remainder;
		n/10;
	}
	if(original==reversed)
	printf("%d is a palindrome.",original);
	else
	printf("%d is not a palindrome.",original);
	return 0;
}
