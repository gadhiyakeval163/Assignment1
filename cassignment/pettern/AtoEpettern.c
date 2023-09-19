//5. A to E pettern print
#include<stdio.h>
int main()
{
    int row,j;
    for (row='A'; row<='E'; row++)
    {
        for (j='A'; j<=row; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}

