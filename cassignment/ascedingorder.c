// Q-23.WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include <stdio.h>
void swap(int *firstNumber, int *secondNumber);
void printArray(int *array, int size);

int main()
{

    int *array;
    int type;
    int i, j, size;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d : ", (i + 1));
        scanf("%d", (array + i));
    }

    printf("Initial array : ");
    printArray(array, size);

    printf("Enter 1 to sort in increasing order and 0 to sort in decreasing order : ");
    scanf("%d", &type);

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (type == 1)
            {
                if (*(array + j) < *(array + i))
                {
                    swap((array + i), (array + j));
                }
            }
            else
            {
            
                if (*(array + j) > *(array + i))
                {
                    swap((array + i), (array + j));
                }
            }
        }
    }
    printf("Final array : ");
    printArray(array, size);
    return 0;
}

void swap(int *firstNumber, int *secondNumber)
{
    int temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}

void printArray(int *array, int size)
{
    int i;
    printf("[ ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("]\n");
}
