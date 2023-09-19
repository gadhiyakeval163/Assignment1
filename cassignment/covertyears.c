//Q-6. WAP to convert years into days and days into year
#include<stdio.h>
int main()
{
	int years,days,week;
	char ch;
	printf("enter choice for convert");
	scanf("%c",&ch);
	switch(ch)
	{
		case'd':
			printf("enter days:");
			scanf("%d",&days);
			years=(days/365);
			week=(days%365)/7;
			days=(days%365)%7;
			printf("years:%d\n",years);
			printf("week:%d\n",week);
			printf("days:%d\n",days);
		break;
		case'y':
			printf("enter years");
			scanf("%d",&years);
			days=years*365;
			printf("days:%d\n",days);
		break;	
	}
	return 0;
}

