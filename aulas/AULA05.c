#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------- 
	Autor: Paulo Dias
   ---------------------------------------------- */

void main() {

	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	int op;
	
	printf("Vote no candidado 1 (Ana) ou 2 (Bob)");
	scanf("%d",&op);
	
	switch(op) {

	case 1:
		printf("Você votou na Ana!\n");
		break;
	case '2':
		printf("Você votou no Bob!\n");	
		break;
	default: 
		printf("Você votou nulo!");
}
	printf("Fim da votação!");
}
