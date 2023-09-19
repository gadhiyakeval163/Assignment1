// Q-20. WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
void add();
void add1();
void add2();
void add3();
int main()
{ 
    int select;
	char choice;
	do{
		printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
		printf("\nEnter choice:");
		scanf("%d",&select);
		switch(choice)
		{
			case'1':
				add();
				break;
			case'2':
				add1();
				break;
			case'3':
				add2();
				break;
			case'4':
				add3();
				break;	
			default:
			printf("operator not currect");	
		}
	printf("\ndo you want caclulate other value : ");
	scanf("\n%c",&choice);	
	}while(choice=='y');  
	return 0;
}
void add()
{
		int num1,num2,ans;
		printf("enter two number");
		scanf("%d %d",&num1,&num2);
		ans=num1+num2;
		printf("addition of two number is %d",ans);
}
void add1()
{
	    int num1,num2,ans;
		printf("enter number one");
		scanf("%d",&num1);
		printf("enter number two");
		scanf("%d",&num2);
		ans=num1-num2;
		printf("subtraction of two number is %d ",ans);
}
void add2()
{
 		int num1,num2,ans;
		printf("enter number one");
		scanf("%d",&num1);
		printf("enter number two");
		scanf("%d",&num2);
		ans=num1*num2;
		printf("multiplication of two number is %d ",ans);	
}
void add3()
{
	    int num1,num2,ans;
		printf("enter number one");
		scanf("%d",&num1);
		printf("enter number two");
		scanf("%d",&num2);
		ans=num1/num2;
		printf("division of two number is %d ",ans);
}


