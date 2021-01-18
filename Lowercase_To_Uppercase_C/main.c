#include <stdio.h>

enum characters {lowerCase, upperCase, noLetter}types;

void PrintCharacter(enum characters forPrint, char letter)
{
    switch (forPrint)
       {
           case lowerCase:
               printf("Uppercase letter is: %c\n", letter);
               break;
           case upperCase:
               printf("You already entered uppercase letter: %c\n", letter);
               break;
           case noLetter:
               printf("Your entered character is not a letter: %c\n", letter);
               break;
       }
}

char GetUppercaseLetter(char letter)
{
    letter = letter - 32;

    return letter;
}

enum characters GetTypeOfCharacter(char character)
{
    if(character > 96 && character < 123)
    {
        return lowerCase;
    }
    else if(character > 64 && character < 91)
    {
        return upperCase;
    }
    else return noLetter;
}

int main()
{
    printf("Please, enter your lowercase letter.\n");

    char character;
    scanf("%c", &character);

    enum characters typeOfCharacter = GetTypeOfCharacter(character);

    if(typeOfCharacter == lowerCase)
    {
        char upperCaseLetter = GetUppercaseLetter(character);
        PrintCharacter(lowerCase, upperCaseLetter);
    }
    else if(typeOfCharacter == upperCase)
    {
        PrintCharacter(upperCase, character);
    }
    else if(typeOfCharacter == noLetter)
    {
        PrintCharacter(noLetter, character);
    }
    else printf("Something get wrong.");

    return 0;
}
