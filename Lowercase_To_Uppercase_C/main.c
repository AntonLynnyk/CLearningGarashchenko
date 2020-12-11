#include <stdio.h>

char FromLowerToUppercase(char letter)
{
    char uppercaseLetter = letter - 32;
    return uppercaseLetter;
}

void PrintAnswer(int a, char character)
{
    char uppercaseLetter;

    switch (a)
    {
        case 1:
            uppercaseLetter = FromLowerToUppercase(character);
            printf("Uppercase of %c", character);
            printf(" is %c\n", uppercaseLetter);
            break;
        case 2:
            printf("You already entered uppercase letter: %c\n", character);
            break;
        case 3:
            printf("Your entered character is not a letter: %c\n", character);
            break;
    }
}

int IsLetterOrUppercaseLetter(char letter)
{
    if(letter > 96 && letter < 123)
    {
        return 1;
    }
    else if (letter > 64 && letter < 91)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

int main()
{
    printf("Please, enter your lowercase letter.\n");

    char letter;

    scanf("%c", &letter);

    int choise = IsLetterOrUppercaseLetter(letter);

    PrintAnswer(choise, letter);

    return 0;
}
