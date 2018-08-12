#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------- 
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Elaborar um programa que apresente o 
	valor da convers�o em real (R$) de um valor 
	lido em d�lar (US$). 
   ---------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	float real, dolar, cot;
	
	printf("Digite a quantidade de US$ d�lares que voc� tem: ");
	scanf("%f",&dolar);
	
	printf("Agora digite a cota��o do d�lar: ");
	scanf("%f",&cot);
	
	real = (dolar * cot);
	
	printf("O valor em d�lar US$%.2f convertido em real � R$%.2f",dolar,real);
	
return;

}
