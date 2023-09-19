//Q-25.WAP find out length of string without using inbuilt function
#include<stdio.h>
int main()
{
    char str[100];
    int i,length;
    printf("Enter a string: \n");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++);
    {
    	length++;
    }
    printf("\nLength of input string: %d",i);
    return 0;
}
