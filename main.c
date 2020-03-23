#include <stdio.h>
#include <string.h>

#define STRSIZE 6

int main()
{
    char arr[][STRSIZE]={
        "01234",
        "56789",
        "abcde",
        "hrohr"
    };

    char (*parr)[STRSIZE]=arr;
    int i, j;    
    char *pstr;

    for(i=0; i<4; i++)
    {
        for(j=0, pstr=*parr; j<STRSIZE; j++, pstr++) 
        {
            printf("%c", *pstr); // прыгаю по символам в строке
        }
        ++parr; //прыгаю по строкам массива 
        printf("\n");
    }

    return 0;
}