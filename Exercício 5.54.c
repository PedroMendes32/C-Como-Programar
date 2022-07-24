
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void adicao (void);
void subtracao (void);
void divisao (void);
void multiplicacao (void);

int tentativas = 0;
int acertos = 0;

int main(void)
{
    char escolha;
    int controle;
    int decisao;
    
    srand( time ( NULL ) );

    while ( controle > 0)

    {
        printf("\n\n\n - MENU DE POSSIBILDIADES: ");
        printf("\n - 'A' = Adicao ");
        printf("\n - 'S' = Subtracao ");
        printf("\n - 'D' = Divisao ");
        printf("\n - 'M' = Multiplicacao ");
        printf("\n\n - Digite o caractere correspondente a sua escolha: ");
        fflush(stdin);
        scanf("%c",&escolha);

        switch ( escolha )
        {
            case 'A': adicao();
            break;

            case 'S': subtracao();
            break;

            case 'D': divisao();
            break;

            case 'M': multiplicacao();
            break;

            default: printf("\n\n - Opcao invalida! ");

        }

        printf("\n\n %d = Tentativas! ",tentativas);
        printf("\n %d = Acertos! ",acertos);
		printf("\n\n");
        printf("\n- 1 = Continuar Jogando ");
        printf("\n- 0 = Sair ");
        printf("\n\n- Digite a sua escolha: ");
        scanf("%d",&decisao);

        if ( decisao == 0 )
        {
            controle = -1;
        }
    }
	
	printf("\n\n - Fim do programa! ");
	
    printf("\n\n\n");
    system("pause");

    return 0;
}

void adicao ( void )
{
    int controle = 1;
    int decisao;
    int dificuldade;
    int primeiro_n, segundo_n;
    int numero_digitado;
    int numero_gerado;

    printf("\n\n - Voce escolheu por Adicao! ");
    printf("\n 1 = Facil ");
    printf("\n 2 = Medio ");
    printf("\n 3 = Dificil ");
    printf("\n\n - Digite a sua opcao: ");
    scanf("%d",&dificuldade);

    switch ( dificuldade )
    {
        case 1: printf("\n\n Dificuldade = Facil!");

                while ( controle > 0 )
                {
                    primeiro_n = 1 + (rand() % 20);
                    segundo_n = 1 + (rand() % 20 );

                    numero_gerado = primeiro_n + segundo_n;

                    printf("\n\n - %d + %d = ? ",primeiro_n,segundo_n);
                    printf("\n\n - Digite a sua resposta: ");
                    scanf("%d",&numero_digitado);

                    if ( numero_digitado == numero_gerado )
                    {
                        printf("\n\n - Parabens, voce acertou! ");
                        acertos++;
                        tentativas++;
                    }

                    else 
                    {
                        printf("\n\n - Voce errou!, a resposta correta era %d. Tente novamente! ",numero_gerado);
                        tentativas++;
                    }

                    printf("\n\n 1 = Jogar Novamente ");
                    printf("\n\n 0 =  Sair ");
                    printf("\n\n - Digite a sua escolha: ");
                    scanf("%d",&decisao);
                    
                    if ( decisao == 0 )
					{
						controle = -1;
					}
                    
                }
        break;

        case 2: printf("\n\n - Dificuldade = Medio! ");
                
                while ( controle > 0 )
                {
                    primeiro_n = 100 + (rand() % 500);
                    segundo_n = 200 + (rand() % 500 );

                    numero_gerado = primeiro_n + segundo_n;

                    printf("\n\n - %d + %d = ?",primeiro_n,segundo_n);
                    printf("\n\n - Digite a sua resposta: ");
                    scanf("%d",&numero_digitado);

                    if ( numero_digitado == numero_gerado )
                    {
                        printf("\n\n - Parabens, voce acertou! ");
                        acertos++;
                        tentativas++;
                    }
                    else
                    {
                        printf("\n\n - Voce errou!, a resposta correta era %d. Tente novamente! ",numero_gerado);
                        tentativas++;
                    }

                    printf("\n\n 1 = Jogar Novamente ");
                    printf("\n\n 0 =  Sair ");
                    printf("\n\n - Digite a sua escolha: ");
                    scanf("%d",&decisao);
                    
                    if ( decisao == 0 )
					{
						controle = -1;
					}
                }
        break;

        case 3: printf("\n\n Dificuldade = Dificil!");

                while ( controle > 0 )
                {
                    primeiro_n = 1000 + (rand() % 10000);
                    segundo_n = 1000 + (rand() % 10000);

                    numero_gerado = primeiro_n + segundo_n;

                    printf("\n\n - %d + %d = ? ",primeiro_n,segundo_n);
                    printf("\n\n - Digite a sua resposta: ");
                    scanf("%d",&numero_digitado);

                    if ( numero_digitado == numero_gerado )
                    {
                        printf("\n\n - Parabens, voce acertou! ");
                        acertos++;
                        tentativas++;
                    }

                    else 
                    {
                        printf("\n\n - Voce errou!, a resposta correta era %d. Tente novamente! ",numero_gerado);
                        tentativas++;
                    }

                    printf("\n\n 1 = Jogar Novamente ");
                    printf("\n\n 0 =  Sair ");
                    printf("\n - Digite a sua escolha: ");
                    scanf("%d",&decisao);
                    
                    if ( decisao == 0 )
					{
						controle = -1;
					}
                }
        break;

        default: printf("\n\n - Opcao invalida! ");
    }
}

void subtracao ( void )
{
    int controle = 1;
    int decisao;
    int dificuldade;
    int primeiro_n, segundo_n;
    int numero_digitado;
    int numero_gerado;

    printf("\n\n - Voce escolheu por Subtracao! ");
    printf("\n 1 = Facil ");
    printf("\n 2 = Medio ");
    printf("\n 3 = Dificil ");
    printf("\n\n - Digite a sua opcao: ");
    scanf("%d",&dificuldade);

    switch ( dificuldade )
    {
        case 1: printf("\n\n Dificuldade = Facil!");

                while ( controle > 0 )
                {
                    primeiro_n = 1 + (rand() % 20);
                    segundo_n = 1 + (rand() % 20 );

                    numero_gerado = primeiro_n - segundo_n;

                    printf("\n\n - %d - %d = ? ",primeiro_n,segundo_n);
                    printf("\n\n - Digite a sua resposta: ");
                    scanf("%d",&numero_digitado);

                    if ( numero_digitado == numero_gerado )
                    {
                        printf("\n\n - Parabens, voce acertou! ");
                        acertos++;
                        tentativas++;
                    }

                    else 
                    {
                        printf("\n\n - Voce errou!, a resposta correta era %d. Tente novamente! ",numero_gerado);
                        tentativas++;
                    }

                    printf("\n\n 1 = Jogar Novamente ");
                    printf("\n\n 0 =  Sair ");
                    printf("\n\n - Digite a sua escolha: ");
                    scanf("%d",&decisao);
                    
                    if ( decisao == 0 )
					{
						controle = -1;
					}
                }
        break;

        case 2: printf("\n\n - Dificuldade = Medio! ");
                
                while ( controle > 0 )
                {
                    primeiro_n = 100 + (rand() % 500);
                    segundo_n = 200 + (rand() % 500 );

                    numero_gerado = primeiro_n - segundo_n;

                    printf("\n\n - %d - %d = ?",primeiro_n,segundo_n);
                    printf("\n\n - Digite a sua resposta: ");
                    scanf("%d",&numero_digitado);

                    if ( numero_digitado == numero_gerado )
                    {
                        printf("\n\n - Parabens, voce acertou! ");
                        acertos++;
                        tentativas++;
                    }
                    else
                    {
                        printf("\n\n - Voce errou!, a resposta correta era %d. Tente novamente! ",numero_gerado);
                        tentativas++;
                    }

                    printf("\n\n 1 = Jogar Novamente ");
                    printf("\n\n 0 =  Sair ");
                    printf("\n\n - Digite a sua escolha: ");
                    scanf("%d",&decisao);
                    
                    if ( decisao == 0 )
					{
						controle = -1;
					}
                }
        break;

        case 3: printf("\n\n Dificuldade = Dificil!");

                while ( controle > 0 )
                {
                    primeiro_n = 1000 + (rand() % 10000);
                    segundo_n = 1000 + (rand() % 10000);

                    numero_gerado = primeiro_n - segundo_n;

                    printf("\n - %d - %d = ? ",primeiro_n,segundo_n);
                    printf("\n - Digite a sua resposta: ");
                    scanf("%d",&numero_digitado);

                    if ( numero_digitado == numero_gerado )
                    {
                        printf("\n\n - Parabens, voce acertou! ");
                        acertos++;
                        tentativas++;
                    }

                    else 
                    {
                        printf("\n\n - Voce errou!, a resposta correta era %d. Tente novamente! ",numero_gerado);
                        tentativas++;
                    }

                    printf("\n\n 1 = Jogar Novamente ");
                    printf("\n\n 0 =  Sair ");
                    printf("\n\n - Digite a sua escolha: ");
                    scanf("%d",&decisao);
                    
                    if ( decisao == 0 )
					{
						controle = -1;
					}
                }
        break;

        default: printf("\n\n - Opcao invalida! ");
    }
}

void multiplicacao ( void )
{
    int controle = 1;
    int decisao;
    int dificuldade;
    int primeiro_n, segundo_n;
    int numero_digitado;
    int numero_gerado;

    printf("\n\n - Voce escolheu por Multiplicacao! ");
    printf("\n 1 = Facil ");
    printf("\n 2 = Medio ");
    printf("\n 3 = Dificil ");
    printf("\n\n - Digite a sua opcao: ");
    scanf("%d",&dificuldade);

    switch ( dificuldade )
    {
        case 1: printf("\n\n Dificuldade = Facil!");

                while ( controle > 0 )
                {
                    primeiro_n = 1 + (rand() % 10);
                    segundo_n = 1 + (rand() % 10 );

                    numero_gerado = primeiro_n * segundo_n;

                    printf("\n\n - %d * %d = ? ",primeiro_n,segundo_n);
                    printf("\n\n - Digite a sua resposta: ");
                    scanf("%d",&numero_digitado);

                    if ( numero_digitado == numero_gerado )
                    {
                        printf("\n\n - Parabens, voce acertou! ");
                        acertos++;
                        tentativas++;
                    }

                    else 
                    {
                        printf("\n\n - Voce errou!, a resposta correta era %d. Tente novamente! ",numero_gerado);
                        tentativas++;
                    }

                    printf("\n\n 1 = Jogar Novamente ");
                    printf("\n\n 0 =  Sair ");
                    printf("\n\n - Digite a sua escolha: ");
                    scanf("%d",&decisao);
                    
                    if ( decisao == 0 )
					{
						controle = -1;
					}
                }
        break;

        case 2: printf("\n\n - Dificuldade = Medio! ");
                
                while ( controle > 0 )
                {
                    primeiro_n = 20 + (rand() % 50);
                    segundo_n = 20 + (rand() % 50 );

                    numero_gerado = primeiro_n * segundo_n;

                    printf("\n\n - %d * %d = ?",primeiro_n,segundo_n);
                    printf("\n\n - Digite a sua resposta: ");
                    scanf("%d",&numero_digitado);

                    if ( numero_digitado == numero_gerado )
                    {
                        printf("\n\n - Parabens, voce acertou! ");
                        acertos++;
                        tentativas++;
                    }
                    else
                    {
                        printf("\n - Voce errou!, a resposta correta era %d. Tente novamente! ",numero_gerado);
                        tentativas++;
                    }

                    printf("\n\n 1 = Jogar Novamente ");
                    printf("\n\n 0 =  Sair ");
                    printf("\n\n - Digite a sua escolha: ");
                    scanf("%d",&decisao);
                    
                    if ( decisao == 0 )
					{
						controle = -1;
					}
                }
        break;

        case 3: printf("\n\n Dificuldade = Dificil!");

                while ( controle > 0 )
                {
                    primeiro_n = 100 + (rand() % 500);
                    segundo_n = 100 + (rand() % 500);

                    numero_gerado = primeiro_n * segundo_n;

                    printf("\n\n - %d * %d = ? ",primeiro_n,segundo_n);
                    printf("\n\n - Digite a sua resposta: ");
                    scanf("%d",&numero_digitado);

                    if ( numero_digitado == numero_gerado )
                    {
                        printf("\n\n - Parabens, voce acertou! ");
                        acertos++;
                        tentativas++;
                    }

                    else 
                    {
                        printf("\n\n - Voce errou!, a resposta correta era %d. Tente novamente! ",numero_gerado);
                        tentativas++;
                    }

                    printf("\n\n 1 = Jogar Novamente ");
                    printf("\n\n 0 =  Sair ");
                    printf("\n\n - Digite a sua escolha: ");
                    scanf("%d",&decisao);
                    
                    if ( decisao == 0 )
					{
						controle =  -1;
					}
                }
        break;

        default: printf("\n - Opcao invalida! ");
    }
}

void divisao ( void )
{
    int controle = 1;
    int decisao;
    int dificuldade;
    float primeiro_n, segundo_n;
    float numero_digitado;
    float numero_gerado;

    printf("\n\n - Voce escolheu por Adicao! ");
    printf("\n 1 = Facil ");
    printf("\n 2 = Medio ");
    printf("\n 3 = Dificil ");
    printf("\n\n - Digite a sua opcao: ");
    scanf("%d",&dificuldade);

    switch ( dificuldade )
    {
        case 1: printf("\n\n Dificuldade = Facil!");

                while ( controle > 0 )
                {
                    primeiro_n = 1 + (rand() % 20);
                    segundo_n = 1 + (rand() % 20 );

                    numero_gerado = primeiro_n / segundo_n;

                    printf("\n\n - %.1f / %.1f = ? ",primeiro_n,segundo_n);
                    printf("\n\n - Digite a sua resposta: ");
                    scanf("%f",&numero_digitado);

                    if ( numero_digitado == numero_gerado )
                    {
                        printf("\n\n - Parabens, voce acertou! ");
                        acertos++;
                        tentativas++;
                    }

                    else 
                    {
                        printf("\n\n - Voce errou!, a resposta correta era %.2f Tente novamente! ",numero_gerado);
                        tentativas++;
                    }

                    printf("\n\n 1 = Jogar Novamente ");
                    printf("\n\n 0 =  Sair ");
                    printf("\n\n - Digite a sua escolha: ");
                    scanf("%d",&decisao);
                    
                    if ( decisao == 0 )
					{
						controle = -1;
					}
                }
        break;

        case 2: printf("\n\n - Dificuldade = Medio! ");
                
                while ( controle > 0 )
                {
                    primeiro_n = 20 + (rand() % 200);
                    segundo_n = 20 + (rand() % 200 );

                    numero_gerado = primeiro_n / segundo_n;

                    printf("\n\n - %.1f / %.1f = ?",primeiro_n,segundo_n);
                    printf("\n\n - Digite a sua resposta: ");
                    scanf("%f",&numero_digitado);

                    if ( numero_digitado == numero_gerado )
                    {
                        printf("\n\n - Parabens, voce acertou! ");
                        acertos++;
                        tentativas++;
                    }
                    else
                    {
                        printf("\n\n - Voce errou!, a resposta correta era %.2f. Tente novamente! ",numero_gerado);
                        tentativas++;
                    }

                    printf("\n\n 1 = Jogar Novamente ");
                    printf("\n\n 0 =  Sair ");
                    printf("\n\n - Digite a sua escolha: ");
                    scanf("%d",&decisao);
                    
                    if ( decisao == 0 )
					{
						controle = -1;
					}
                }
        break;

        case 3: printf("\n\n Dificuldade = Dificil!");

                while ( controle > 0 )
                {
                    primeiro_n = 100 + (rand() % 800);
                    segundo_n = 100 + (rand() % 800);

                    numero_gerado = primeiro_n / segundo_n;

                    printf("\n\n - %.1f / %.1f = ? ",primeiro_n,segundo_n);
                    printf("\n\n - Digite a sua resposta: ");
                    scanf("%f",&numero_digitado);

                    if ( numero_digitado == numero_gerado )
                    {
                        printf("\n\n - Parabens, voce acertou! ");
                        acertos++;
                        tentativas++;
                    }

                    else 
                    {
                        printf("\n\n - Voce errou!, a resposta correta era %.2f. Tente novamente! ",numero_gerado);
                        tentativas++;
                    }

                    printf("\n\n 1 = Jogar Novamente ");
                    printf("\n\n 0 =  Sair ");
                    printf("\n - Digite a sua escolha: ");
                    scanf("%d",&decisao);
                    
                    if ( decisao == 0 )
					{
						controle = -1;
					}
                }
        break;

        default: printf("\n\n - Opcao invalida! ");
    }
}