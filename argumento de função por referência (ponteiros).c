#include<stdio.h>
#include<stdlib.h>

void cuboPorReferencia ( int *nPtr );

int main(void)
{
    int numero;

    printf("\n - Digite um numero inteiro: ");
    scanf("%d",&numero);

    /* Passando o endere�o de mem�ria de numero como 
    argumento */

    cuboPorReferencia ( &numero );

    printf("\n - O novo valor e igual a %d",numero);

    printf("\n\n\n");
    system("pause");

    return 0;
}

 /* *nPtr ser� o novo valor de numero, pois
 a altera��o occore no endere�o de mem�ria de numero */
 
void cuboPorReferencia ( int *nPtr )
{   
    *nPtr = (*nPtr) * (*nPtr) * (*nPtr);
}