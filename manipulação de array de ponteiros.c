#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    const char *naipes[4] = { "Ouro", "Copas", "Espadas", "Paus"};
    int i;
	
	printf("\n\n - Printando Caracteres iniciais do Array: ");
	
    for ( i = 0; i < 4; i++ )
    {
		printf("\n *naipes[%d] = %c",i,*naipes[i]);
    }
    
    printf("\n\n - Printando Strings do Array de ponteiros: ");
    
    for ( i = 0; i < 4; i++ )
	{
		printf("\n naipes[%d] = %s",i,naipes[i]);
	}
	
	printf("\n\n - Printando os Caracteres da String naipes[0]:");
	printf("\n");
	
	/* Usando aritmética de Ponteiros */
	
	for ( ; *naipes[0] != '\0'; naipes[0]++ )
	{
		printf(" %c ",*naipes[0]);
	}
	
	printf("\n\n - Printando os Caracteres da String naipes[1]: ");
	printf("\n");
	
	for ( ; *naipes[1] != '\0'; naipes[1]++)
	{
		printf(" %c ",*naipes[1]);
	}
	
	printf("\n\n - Printando os Caracteres da String naipes[2]: ");
	printf("\n");
	
	for ( ; *naipes[2] != '\0'; naipes[2]++ )
	{
		printf(" %c ",*naipes[2]);
	}
	
	printf("\n\n - Printando os Caracteres da String naipes[3]: ");
	printf("\n");
	
	for (  ; *naipes[3] != '\0'; naipes[3]++ )
	{
		printf(" %c ",*naipes[3]);
	}

    printf("\n\n\n");
    system("pause");

    return 0;
}