//Q-2. write a program to make simple calculator (to make addition,subtraction,multiplication,division,modulo)
#include<stdio.h>
int main()
{
	int number1, number2, addition,subtraction, multiplication,modulo;
	float division;
	 printf("Enter Number 1\n");
	 scanf("%d", &number1);
	 printf("Enter Number 2\n");
	 scanf("%d", &number2);
	 addition = number1 + number2;
	 subtraction = number1 - number2;
	 multiplication = number1 * number2;
	 modulo = number1 % number2;
	 division = number1 / (float)number2;
	 printf("Addition = %d\n",addition);
	 printf("Subtraction =%d\n",subtraction);
	 printf("Multiplication =%d\n",multiplication);
	 printf("modulo =%d\n",modulo);
	 printf("Division =%.2f\n",division); 
	return 0;
}

