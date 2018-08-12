#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------- 
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar o c�lculo e apresentar o valor de
	uma presta��o de um bem em atraso.
   ---------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	float prestacao, valor, taxa;
	int tempo;
	
	printf("Qual o valor da presta��o? R$");
	scanf("%f",&valor);
	
	printf("\nQual a taxa? R$");
	scanf("%f",&taxa);	

	printf("\nQual o tempo de atraso da presta��o? ");
	scanf("%d",&tempo);	
	
	prestacao = (valor + (valor*(taxa/100)*tempo)); 
	
	printf("\nO valor da presta��o em atraso � R$%.2f\n",prestacao);
	
return;

}
