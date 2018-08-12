#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------- 
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar o cálculo e apresentar o valor de
	uma prestação de um bem em atraso.
   ---------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	float prestacao, valor, taxa;
	int tempo;
	
	printf("Qual o valor da prestação? R$");
	scanf("%f",&valor);
	
	printf("\nQual a taxa? R$");
	scanf("%f",&taxa);	

	printf("\nQual o tempo de atraso da prestação? ");
	scanf("%d",&tempo);	
	
	prestacao = (valor + (valor*(taxa/100)*tempo)); 
	
	printf("\nO valor da prestação em atraso é R$%.2f\n",prestacao);
	
return;

}
