#include "functions.h"

using namespace std;

int sizeOfText( char text[] )
{
    int counter = 0;
    while( text[counter] != '\0' )
    {
        ++ counter ;
    }
    return counter;
}


void outputSymbol( int beginIndex, int endIndex, char text[] )
{
    cout << " ";
    for( int i = beginIndex; i < endIndex + 1; ++i )
    {
        cout << text[i];
    }
}
