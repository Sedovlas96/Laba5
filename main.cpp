//Вариант 6.
//Найти и вывести все слова текста, у которых первый и последний символы совпадают.

#include <iostream>
#include <stdio.h>
#include <cstring>
#include "functions.h"

using namespace std;

int main()
{
    const int MaxLengthOfText = 1000;
    char text[MaxLengthOfText];
    cout << " Enter your Text: " << endl << " ";
    gets( text );
    int lengthOfText = sizeOfText( text );
    int beginIndex = 0, endIndex, i = 0;
    while( i < lengthOfText )
    {
        if( text[i] == ' ' && text[i + 1] != ' ')
        {
            beginIndex = i + 1;
        }
        if( text[i] != ' ' && ( text[i + 1] == ' ' || text[i + 1] == '\0' ) && text[i] == text[beginIndex] )
        {
            outputSymbol( beginIndex, i, text );
            beginIndex = i ;
        }
        ++ i;
    }
    return 0;
}



