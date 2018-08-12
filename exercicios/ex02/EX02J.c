#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Elaborar um programa que leia dois valores
	numéricos reais desconhecidos. Calcular e apresentar
	os resultados das quatro operações aritméticas básicas.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	float n1, n2;
	
	printf("Digite o primeiro número: ");
	scanf("%f",&n1);
	
	printf("Digite o segundo número: ");
	scanf("%f",&n2);
	
	printf("%.2f + %.2f = %.2f\n",n1,n2,n1+n2);
	printf("%.2f - %.2f = %.2f\n",n1,n2,n1-n2);
	printf("%.2f * %.2f = %.2f\n",n1,n2,n1*n2);
	printf("%.2f / %.2f = %.2f",n1,n2,n1/n2);
	
return;

}
