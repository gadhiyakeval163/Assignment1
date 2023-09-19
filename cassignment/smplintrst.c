// Q-4. WAP to find simple interest
#include<stdio.h>
int main()
{
    int p,r,n,si;
	printf("enter value ");
	scanf("%d %d %d",&p,&r,&n);
	si=p*r*n/100;
	printf("inter simple instrest is %d",si);
	return 0;
}

