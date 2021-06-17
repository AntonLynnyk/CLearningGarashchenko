#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *leftChild;
    struct Node *rightChild;
};

struct Node *newNode(int number, struct Node *tree)
{
    if (tree == NULL)
    {
        tree = malloc(sizeof (struct Node));
        tree->value = number;
        tree->leftChild = NULL;
        tree->rightChild = NULL;
    }
    else
    {
        if (number < tree->value)
        {
            tree->leftChild = newNode(number, tree->leftChild);
        }
        if (number > tree->value || number == tree->value)
        {
            tree->rightChild = newNode(number, tree->rightChild);
        }
    }
    return tree;
}

int main()
{  
    void SortArray(struct Node *binaryTree, int **p); // function prototypes
    void PrintArray(int array[], int sizeOfArray);
    void CreateBinaryTree(int array[], int sizeOfArray, struct Node **root);

    int array[] = {9, 1, 5, 3, 7, 2, 8, 4, 13, -10, 5};
    int sizeOfArray = sizeof (array) / sizeof (int);
    int *p = array;

    struct Node *root = NULL; // an empty root

    CreateBinaryTree(array, sizeOfArray, &root); // creation of binary tree

    PrintArray(array, sizeOfArray); // print source array

    SortArray(root, &p); //  binary tree traversal (inorder)

    PrintArray(array, sizeOfArray); // print sorted array

    getchar(); // wait for character to exit

    return 0;
}

void SortArray(struct Node *binaryTree, int **p)
{
    if (binaryTree != NULL)
    {
        SortArray(binaryTree->leftChild, p);
        **p = binaryTree->value;
        ++*p;
        SortArray(binaryTree->rightChild, p);
    }
}

void PrintArray(int array[], int sizeOfArray)
{
    printf("Array: ");
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void CreateBinaryTree(int array[], int sizeOfArray, struct Node **root)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        *root = newNode(array[i], *root);
    }
}
