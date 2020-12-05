#include <stdio.h>

void Swap(int *left, int *right)
{
    int temp = *left;
    *left = *right;
    *right = temp;
}

void SortArray(int array[], int sizeOfArray)
{
    int minElement = 0;
    int thisElement = 0;

    for(int i = 0; i < sizeOfArray - 1; i++)
    {
        minElement = i;

        for(thisElement = i; thisElement < sizeOfArray; thisElement++)
        {
            if(array[thisElement] < array[minElement])
            {
                Swap(&array[minElement], &array[thisElement]);
            }
        }
    }

    printf("Sorted array:\n");

    for (int k = 0; k < sizeOfArray; k++)
    {
        printf("%d\n", array[k]);
    }
}

int main()
{
    int unsortedArray[] = {5, 14, 2, 1, -17, 4, 100, 832, -72, 44, 141};

    SortArray(unsortedArray, sizeof(unsortedArray) / sizeof(unsortedArray[0]));

    return 0;
}
