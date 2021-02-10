#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	char nome[20] ;
	char letra[6] ;
	
	setlocale (LC_ALL, "portuguese") ;

	printf ("\n Digite uma palavra....: ") ;
	fgets (nome, 20, stdin) ;

	printf ("\n") ;
	
	strncpy(letra, nome, 4) ;

  printf ("\n Só 4 letras = %s", letra) ;

	return 0 ;
	system ("pasuse") ;
}
