#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Elaborar um programa que leia dois valores
	num�ricos reais desconhecidos. Calcular e apresentar
	os resultados das quatro opera��es aritm�ticas b�sicas.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	float n1, n2;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f",&n1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f",&n2);
	
	printf("%.2f + %.2f = %.2f\n",n1,n2,n1+n2);
	printf("%.2f - %.2f = %.2f\n",n1,n2,n1-n2);
	printf("%.2f * %.2f = %.2f\n",n1,n2,n1*n2);
	printf("%.2f / %.2f = %.2f",n1,n2,n1/n2);
	
return;

}
