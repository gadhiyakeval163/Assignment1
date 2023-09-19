// Loping programs:3.how many even number are there
#include <stdio.h>
int main()
{
   int num,a,even=0;
    printf("input 10 number");
    for(a=1;a<=10;a++)
    {
        printf("number:%d\n",a);
        scanf("%d",&num);
        if(num%2==0)
        {
        	even++;
		}
    }
    printf("even number %d",even);
    return 0;
}

