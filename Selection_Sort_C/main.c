#include <stdio.h>

void SortArray(int Array[], int sizeOfArray)
{
    int minElement = 0;
    int thisElement = 0;
    int helpElement = 0;

    for(int i = 0; i < sizeOfArray - 1; i++)
    {
        minElement = i;

        for(thisElement = i; thisElement < sizeOfArray; thisElement++)
        {
            if(Array[thisElement] < Array[minElement])
            {
                helpElement = Array[minElement];
                Array[minElement] = Array[thisElement];
                Array[thisElement] = helpElement;
            }
        }
    }

    for (int k = 0; k < sizeOfArray; k++)
    {
        printf("Sorted Array: %d\n", Array[k]);
    }
}

int main()
{
    int UnsortedArray[] = {5, 14, 2, 1, -17, 4, 100, 832, -72, 44, 141};

    SortArray(UnsortedArray, sizeof(UnsortedArray) / sizeof(UnsortedArray[0]));

    return 0;
}
