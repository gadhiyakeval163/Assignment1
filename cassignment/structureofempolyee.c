//Q-27.write a program of structure employee that provides the following information print and display empno,empname,address and age
#include<stdio.h>
struct employee{
	int emp_no;
	char emp_name[100];
	char emp_address[100];
	int emp_age;
};
int main()
{
    struct employee emp;
    printf("\nenter details:\n");
	printf("employee name:\n");
	scanf("%s",&emp.emp_name);
	printf("employee number:\n");
	scanf("%d",&emp.emp_no);
	printf("employee age:\n");
	scanf("%d",&emp.emp_age);
	printf("employee address:\n");
	scanf("%s",&emp.emp_address);
	printf("\n-----------------details of employee -----------------\n");
    printf("\nemployee name is:%s\nemployee number is:%d\nemployee age is:%d \nemployee address is:%s",emp.emp_name,emp.emp_no,emp.emp_age,emp.emp_address);
	return 0;
}
