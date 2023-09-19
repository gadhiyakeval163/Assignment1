//Q-24. WAP to make addition,subtraction and multiplication of two matrix using 2-D Array.
#include<stdio.h>
int main()
{
	int number[2][2],number2[2][2],result[2][2],i,j;
	printf("enter 4 values for first array:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&number[i][j]);
		}
	}
	printf("enter 4 value for second array:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&number2[i][j]);	
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j]=number[i][j]+number2[i][j];
		}
	}
	printf("\nyour Additioon result array is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j]=number[i][j]-number2[i][j];
		}
	}
	printf("\nyour Subtraction result array is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j]=number[i][j]*number2[i][j];
		}
	}
	printf("\nyour multiplication result array is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}


