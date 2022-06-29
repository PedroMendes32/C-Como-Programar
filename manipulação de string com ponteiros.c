#include<stdio.h>
#include<stdlib.h>

void conversao_string ( char *sPtr );

int main(void)
{
    char string[] = " Sed ut perspiciatis unde omnis iste natus ";

    printf("\n - String Original = %s",string);
	printf("\n\n");
	printf("\n - String Modificada: ");
	
    conversao_string ( string );

    printf("\n\n\n");
    system("pause");

    return 0;
}

void conversao_string ( char *sPtr )
{
    for ( ; *sPtr != '\0'; sPtr++ )
    {
        printf(" %c ",*sPtr);
    }
}