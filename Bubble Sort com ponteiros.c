#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 30

void bubbleSort ( int vetor[], const int size );

int main(void)
{
    int i;
    int vetor_main[SIZE];

    srand( time ( NULL ) );

    for ( i = 0; i < SIZE; i++ )
    {
        vetor_main[i] = 1 + ( rand() % 20 );
    }

    printf("\n\n - Vetor Gerado: ");

    for ( i = 0; i < SIZE; i++ )
    {
        printf("%4d",vetor_main[i]);
    }

    printf("\n\n - Vetor Ordenado: ");

    bubbleSort ( vetor_main, SIZE );

    printf("\n\n\n");
    system("pause");

    return 0;
}

void bubbleSort ( int vetor[], const int size )
{
    void swap ( int *numero1Ptr, int *numero2Ptr );

    int i;
    int passo;
    
    for ( passo = 1; passo < size; passo++ )
    {
        for ( i = 0; i < size - 1; i++ )
        {
            if ( vetor[i] > vetor[i + 1] )
            {
                swap ( &vetor[i], &vetor[i + 1] );
            }
            
        }
    }

    for ( i = 0; i < size; i++ )
    {
        printf("%4d",vetor[i]);
    }
}

void swap ( int *numero1Ptr, int *numero2Ptr )
{
    int troca;

    troca = *numero1Ptr;
    *numero1Ptr = *numero2Ptr;
    *numero2Ptr = troca;
}