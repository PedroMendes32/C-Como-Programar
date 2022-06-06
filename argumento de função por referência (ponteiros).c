#include<stdio.h>
#include<stdlib.h>

void cuboPorReferencia ( int *nPtr );

int main(void)
{
    int numero;

    printf("\n - Digite um numero inteiro: ");
    scanf("%d",&numero);

    /* Passando o endereço de memória de numero como 
    argumento */

    cuboPorReferencia ( &numero );

    printf("\n - O novo valor e igual a %d",numero);

    printf("\n\n\n");
    system("pause");

    return 0;
}

 /* *nPtr será o novo valor de numero, pois
 a alteração occore no endereço de memória de numero */
 
void cuboPorReferencia ( int *nPtr )
{   
    *nPtr = (*nPtr) * (*nPtr) * (*nPtr);
}