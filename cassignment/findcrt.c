// Q-3. WAP to find area of circle,rectangle and triangle
#include<stdio.h>
int main()
{
	float radius,area; 
	float len,wid;
	float b,h,Area;
	printf("Enter Radius of a Circle\n"); //circle
	scanf("%f", &radius);
	printf("Enter length and width of Rectangle"); //rectangle
	scanf("%f %f",&len,&wid);
	printf("enter the base and height of triangle");//triangle
	scanf("%f %f",&b,&h);
	area=3.14 * radius * radius; 
	area= len * wid;
	Area=(0.5*b*h);
	printf("Area of Circle = %.2f\n",radius,area); 
	printf("Area of Rectangle= %.3f\n",area);
    printf("Area of triangle=%.2f cm\n",Area);
	return 0;
	
}

