//6. program to print right pase triangle pettern
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the value number:");
	scanf("%d",&n);
	for(i=-n;i<=n;i++)
	{
		k=i;
		if(k<0)
		k=k*-1;
		for(j=0;j<=n;j++)
		{
			if(k<=j)
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
