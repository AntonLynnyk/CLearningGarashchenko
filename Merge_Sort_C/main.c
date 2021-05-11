#include <stdio.h>

void PrintArray(int array[], int sizeOfArray)
{
    for(int i = 0; i < sizeOfArray; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

void MergeArrays(int array[], int leftHalf[], int rightHalf[], int left, int right)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < left && j < right) {
        if(leftHalf[i] <= rightHalf[j])
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

void SortArray(int array[], int sizeOfArray)
{
    if(sizeOfArray < 2) return;

    int beforeMiddle = sizeOfArray / 2;
    int afterMiddle = sizeOfArray - beforeMiddle;
    int leftHalf[beforeMiddle];
    int rightHalf[afterMiddle];

    for(int i = 0; i < beforeMiddle; i++)
    {
        leftHalf[i] = array[i];
    }
    for(int i = beforeMiddle; i < sizeOfArray; i++)
    {
        rightHalf[i - beforeMiddle] = array[i];
    }
    SortArray(leftHalf, beforeMiddle);
    SortArray(rightHalf, afterMiddle);

    MergeArrays(array, leftHalf, rightHalf, beforeMiddle, afterMiddle);
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
