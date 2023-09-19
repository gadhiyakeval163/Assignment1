//Q-10. WAP to show: 1. monday to sunday using switch case
#include<stdio.h>
int main()
{
	int day;
	printf("enter your day");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
		    printf("monday");
		    break;
		case 2:
		    printf("Tuesday");
		    break;
		case 3:
		    printf("Wednesday");
		    break;
	    case 4:
		    printf("Thursday");
		    break;
	    case 5:
		    printf("Friday");
		    break;
		case 6:
		    printf("saturday");
		    break;
		case 7:
		    printf("sunday");
		    break;
	    default:
	    	printf("kindly enter choice from menu");
	    	break;
	}
	return 0;
}

