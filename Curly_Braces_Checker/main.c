#include <stdio.h>
#include <stdlib.h>

void PrintResult(int a) // C:/Users/Tom/Documents/Curly_Braces_Checker/Test document.txt
{
    FILE *fout;
    fout = fopen("C:/Users/Tom/Documents/Curly_Braces_Checker/out.txt", "w+");

    switch (a)
    {
        case 1:
            fprintf(fout, "Unable to open the file.\nPlease ckeck if your file exists.\n");
            printf("Unable to open the file.\nPlease ckeck if your file exists.\n");
        break;

        case 2:
            fprintf(fout, "There are no curly brackets in this file.\n");
            printf("There are no curly brackets in this file.\n");
        break;

        case 3:
            fprintf(fout, "The balance of brackets is not broken.\n");
            printf("The balance of brackets is not broken.\n");
        break;

        case 4:
            fprintf(fout, "The balance of brackets is broken.\n");
            printf("The balance of brackets is broken.\n");
        break;

        default:
            fprintf(fout, "Something got wrong.\n");
            printf("Something got wrong.\n");
        break;
    }
    fclose(fout);
}

int ProcessData(char array[], int counter)
{
        int openBracketCounter = 0;
        int closeBracketCounter = 0;

        for(int i = 0; i < counter; i++)
        {
            if(array[i] == '{') openBracketCounter++;

            if(array[i] == '}') closeBracketCounter++;
        }

        if(openBracketCounter == 0 && closeBracketCounter == 0) return 2;
        if(openBracketCounter == closeBracketCounter) return 3;
        if(openBracketCounter != closeBracketCounter) return 4;
        return 0;
}

int main()
{
    FILE *fin;

    char fileWay[1000];
    char text[1000];
    char ch;
    int counter = 0;
    int result;

    printf("This program will check your code for curly braces.\n");
    printf("Please enter a way to the file: ");

    scanf("%[^\n]s", fileWay);
    printf("%s\n", fileWay);

    fin = fopen(fileWay, "r");
    if(fin == NULL)
    {
        PrintResult(1);
        fclose(fin);
    }
    else
    {
        while((ch = fgetc(fin)) != EOF)
        {
            text[counter] = ch;
            counter++;
        }
        fclose(fin);

        result = ProcessData(text, counter);

        PrintResult(result);
    }

    getchar();

    return 0;
}
