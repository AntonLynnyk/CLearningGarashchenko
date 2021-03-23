#include <stdio.h>
#include <time.h>
#define size 100

enum numbers {Zero, One, Two, Three, Four, Five, Six, Seven, Eight, Nine}numb;

void PrintResult(int dataTable[10][size/2])
{
    for(int i = 0; i < 10; i++)
    {
        printf("%d  ", dataTable[i][0]);

        for(int k = 1; k < size/2; k++)
        {
            if(k == 48)
            {
                printf("  ");
            }
            else
            {
                printf("%d", dataTable[i][k]);
            }
        }
        printf("\n");
    }
}

void FillDataTable(int number[])
{
    int dataTable[10][size/2];
    int counter[10];

    for(int i = 0; i < 10; i++)
    {
        dataTable[i][0] = i;
        counter[i] = 0;

        for(int k = 1; k < size/2; k++)
        {
            dataTable[i][k] = 0;
        }
    }

    for(int i = 0; i < size*2; i++)
    {
        switch (number[i])
        {
            case Zero:
            counter[Zero]++;
            dataTable[Zero][counter[Zero]] = 1;
            break;

            case One:
            counter[One]++;
            dataTable[One][counter[One]] = 1;
            break;

            case Two:
            counter[Two]++;
            dataTable[Two][counter[Two]] = 1;
            break;

            case Three:
            counter[Three]++;
            dataTable[Three][counter[Three]] = 1;
            break;

            case Four:
            counter[Four]++;
            dataTable[Four][counter[Four]] = 1;
            break;

            case Five:
            counter[Five]++;
            dataTable[Five][counter[Five]] = 1;
            break;

            case Six:
            counter[Six]++;
            dataTable[Six][counter[Six]] = 1;
            break;

            case Seven:
            counter[Seven]++;
            dataTable[Seven][counter[Seven]] = 1;
            break;

            case Eight:
            counter[Eight]++;
            dataTable[Eight][counter[Eight]] = 1;
            break;

            case Nine:
            counter[Nine]++;
            dataTable[Nine][counter[Nine]] = 1;
            break;

            default:
            printf("Something got wrong!");
        }
    }

    for(int i = 0; i < 10; i++)
    {
        dataTable[i][49] = counter[i];
    }

    PrintResult(dataTable);
}

void PrintRandomNumbers(int numbers[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if(i%40 == 0)
        {
            printf("\n");
        }
        else
        {
            printf("%d ",numbers[i]);
        }
    }
    printf("\n\n");
}

void PrintInFile(int number)
{
    FILE *file;

    file = fopen("C:/Users/Tom/Documents/Random_Numbers_Generator/randomNumbers.txt","a");

    fprintf(file, "%d\n", number);

    fclose(file);
}

unsigned long int seed = 1;

unsigned int Rand()
{
    int a = 16807;
    unsigned int m = 0x7fffffff;

    seed = seed * a % m;
    return seed;
}

int main()
{
    printf("This program will generate random numbers with Linear congruential method from 0 to 9.\n");

    int array[size*2];

    seed = time(0);

    int n = 0;

    while (n < size*2)
    {
        array[n] = Rand() % 10; // from 0 to 9
        n++;
    }

    PrintRandomNumbers(array, n);

    FillDataTable(array);

    getchar();
    return 0;
}
