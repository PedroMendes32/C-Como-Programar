#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void embaralha ( int baralho[4][13] );
void distribui ( int baralho[4][13], char *naipe[], char *face[] );

int main(void)
{
    int i;
    int j;
    int baralho[4][13];
    
    for ( i = 0; i < 4; i++ )
	{
		for ( j = 0; j < 13; j++ )
		{
			baralho[i][j] = 0;
		}
	}
    
    char *naipe[4] = { "Copas", "Ouros", "Paus", "Espadas"};
    char *face[13] = { "As", "Dois", "Tres", "Quatro", "Cinco","Seis","Sete","Oito","Nove","Dez","Valete","Dama","Rei"};


    embaralha ( baralho );
    distribui ( baralho, naipe, face );

    printf("\n\n\n");
    system("pause");

    return 0;
}
void embaralha ( int baralho[4][13] )
{
    int cartas;
    int linha;
    int coluna;

    for ( cartas = 1; cartas <= 52; cartas++ )
    {
    	 srand( time ( NULL ) );
    	 
        do 
        {
            linha = (rand() % 4);
            coluna = (rand() % 13);
        }
        
        while ( baralho[linha][coluna] != 0 );

        baralho[linha][coluna] = cartas;
    }
}
void distribui ( int baralho[4][13], char *naipe[], char *face[] )
{
    int cartas;
    int linha;
    int coluna;

    for ( cartas = 1; cartas <= 52; cartas++ )
    {
        for ( linha = 0; linha < 4; linha++ )
        {
            for ( coluna = 0; coluna < 13; coluna++ )
            {
                if ( baralho[linha][coluna] == cartas )
                {
                    printf("\n\n - %da Carta = %s de %s",cartas,face[coluna],naipe[linha]);
                }
            }
        }
    }
}