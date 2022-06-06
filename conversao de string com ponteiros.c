#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void conversao_string ( char *sPtr );

int main(void)
{
    char string[] = "testando a conversao usando ponteiros 123! ";

    printf("\n - String atual = %s",string);
    conversao_string ( string );
    printf("\n - String modificada = %s",string);

    printf("\n\n\n");
    system("pause");

    return 0;
}

void conversao_string ( char *sPtr )
{
    while ( *sPtr != '\0') 
    {
        if ( islower( *sPtr ) )
        {
            *sPtr = toupper ( *sPtr );
        }

        ++sPtr;
        /* Deslocando para o próximo caractere */
    }
}