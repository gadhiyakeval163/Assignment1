#include<stdio.h>
struct employee{
	int e_no;
	char e_name[10];
	char e_address[10];
	int e_age;
};
int main()
{
	struct employee e1[5];
	int i;
	printf("\n---------------------------- employee details ---------------------------------\n");
	for (i=0;i<2uv;i++)
	{
		printf("enter %s employee name\n",i+1);
		scanf("%s",&e1[i].e_name);
		printf("enter %d employee number\n",i+1);
		scanf("%d",&e1[i].e_no);
		printf("enter %d employee age\n",i+1);
		scanf("%d",&e1[i].e_age);
		printf("enter %s employee address\n",i+1);
		scanf("%s",&e1[i].e_address);
	}
	printf("\n----------------------------details of employee---------------------------------\n");
	for(i=0;i<5;i++)
	{
		printf("\nemployee name %s",e1[i].e_name);
		printf("\nemployee number %d\n",e1[i].e_no);
		printf("\nemployee age %d",e1[i].e_age);
		printf("\nemployee address %s",e1[i].e_address);
	}
	return 0;
}
