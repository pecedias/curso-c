#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Jo�o Miguel De Jesus
	Desc: Elaborar um programa que leia dez valores num�ricos 
	reais e apresente no final o somat�rio e a m�dia dos
	valores lidos.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	float valor, soma, media;
	int count = 0;
	
	while(count < 10) {		
		printf("Digite um valor: ");
		scanf("%f",&valor);		
		soma += valor;
		count++;
	}
	media = soma / 10;
	printf("A soma de todos os valores lidos �: %.2f\n",soma);
	printf("A m�dia de todos os valores lidos �: %.2f",media);

return;

}
