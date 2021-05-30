#include <stdio.h>

void PrintArray(int array[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

void MergeArrays(int array[], int leftHalf[], int rightHalf[], int left, int right)
{
    int i = 0, j = 0, k = 0;

    while (i < left && j < right)
    {
        if (leftHalf[i] <= rightHalf[j])
        {
            array[k++] = leftHalf[i++];
        }
        else
        {
            array[k++] = rightHalf[j++];
        }
    }

    while (i < left)
    {
        array[k++] = leftHalf[i++];
    }

    while (j < right)
    {
        array[k++] = rightHalf[j++];
    }
}

void CopyArray(int source[], int sizeOfSource, int leftHalfArray[], int leftArraySize, int rightHalfArray[])
{
    for (int i = 0; i < leftArraySize; i++)
    {
        leftHalfArray[i] = source[i];
    }

    for (int i = leftArraySize; i < sizeOfSource; i++)
    {
        rightHalfArray[i - leftArraySize] = source[i];
    }
}

void SortArray(int array[], int sizeOfArray)
{
    if (sizeOfArray < 2) return;

    int leftArraySize = sizeOfArray / 2;
    int rightArraySize = sizeOfArray - leftArraySize;
    int leftHalfArray[leftArraySize];
    int rightHalfArray[rightArraySize];

    CopyArray(array, sizeOfArray, leftHalfArray, leftArraySize, rightHalfArray);

    SortArray(leftHalfArray, leftArraySize);
    SortArray(rightHalfArray, rightArraySize);

    MergeArrays(array, leftHalfArray, rightHalfArray, leftArraySize, rightArraySize);
}

int main()
{
    int array[] = {3, 2, -7, 4, 0, 6, 5, 9, 1, 8, 0};
    int sizeOfArray = sizeof(array) / sizeof(int);

    printf("This program sorts an integer array using merge sort algorithm.\n");
    printf("Array before sorting: ");
    PrintArray(array, sizeOfArray);

    SortArray(array, sizeOfArray);

    printf("Array after sorting: ");
    PrintArray(array, sizeOfArray);

    getchar();

    return 0;
}
