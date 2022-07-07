#include<stdio.h>
#include<stdlib.h>

void copia1 ( char *s1, char *s2 );
void copia2 ( char *s1, char *s2 );

int main (void)
{
    char string1[10];
    char *string2 = "Dia";
    char string3[10];
    char string4[] = "Noite";


    printf("\n\n - String 1 Antes da funcao = %s",string1);
    printf("\n - String 3 Antes da funcao = %s",string3);
	
	printf("\n\n - Implementando as Funcoes: ");
	
    copia1 ( string1, string2 );

    printf("\n - String 1 = %s",string1);

    copia2 ( string3, string4 );

    printf("\n - String 3 = %s",string3);

    printf("\n\n\n");
    system("pause");

    return 0;
}

/* Subscrito de Array */

void copia1 ( char *s1, char *s2 )
{
    int i;

    for ( i = 0; (s1[i] = s2[i]) != '\0'; i++ )
    {
        ;
    }
} 

/* Subscrito de Ponteiro */

void copia2 ( char *s1, char *s2 )
{
    for ( ; (*s1 = *s2 ) != '\0'; s1++,s2++ )
    {
        ;
    }
}