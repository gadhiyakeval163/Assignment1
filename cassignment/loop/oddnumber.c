//Looping programs:4.how many odd number are there
#include<stdio.h>
int main()
{
  
    int num,a,odd=0;
    printf("input 10 number");
    for(a=1;a<=10;a++)
    {
        printf("number:%d\n",a);
        scanf("%d",&num);
        if(num%2!=0)
        {
        	odd++;
		}
    }
    printf("odd number %d",odd);
    return 0;
}

