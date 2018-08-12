#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------- 
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Elaborar um programa que apresente o 
	valor da conversão em real (R$) de um valor 
	lido em dólar (US$). 
   ---------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	float real, dolar, cot;
	
	printf("Digite a quantidade de US$ dólares que você tem: ");
	scanf("%f",&dolar);
	
	printf("Agora digite a cotação do dólar: ");
	scanf("%f",&cot);
	
	real = (dolar * cot);
	
	printf("O valor em dólar US$%.2f convertido em real é R$%.2f",dolar,real);
	
return;

}
