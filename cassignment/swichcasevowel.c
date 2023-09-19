//Q-10.WAP to show: 2.vowel or consonant using switch case
#include<stdio.h>
int main()
{
	int ch;
	printf("enter any alphabet");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		    printf("vowel");
		    break;
		case 'e':
		    printf("vowel");
		    break;
		case 'i':
		    printf("vowel");
		    break;
	    case 'o':
		    printf("vowel");
		    break;
	    case 'u':
		    printf("vowel");
		    break;
		case 'A':
		    printf("vowel");
		    break;
		case 'E':
		    printf("vowel");
		    break;
		case 'I':
		    printf("vowel");
		    break;
		case 'O':
		    printf("vowel");
		    break;
		case 'U':
		    printf("vowel");
		    break;
	    default:
	    	printf("consonant");
	    	break;
	}
	return 0;
}

