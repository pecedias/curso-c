#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------- 
	Autor: Paulo Dias
   ---------------------------------------------- */

void main() {

	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	int op;
	
	printf("Vote no candidado 1 (Ana) ou 2 (Bob)");
	scanf("%d",&op);
	
	switch(op) {

	case 1:
		printf("Voc� votou na Ana!\n");
		break;
	case '2':
		printf("Voc� votou no Bob!\n");	
		break;
	default: 
		printf("Voc� votou nulo!");
}
	printf("Fim da vota��o!");
}
