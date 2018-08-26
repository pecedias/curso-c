#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e João Miguel De Jesus
	Desc: Elaborar um programa que leia dez valores numéricos 
	reais e apresente no final o somatório e a média dos
	valores lidos.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	float valor, soma, media;
	int count = 0;
	
	while(count < 10) {		
		printf("Digite um valor: ");
		scanf("%f",&valor);		
		soma += valor;
		count++;
	}
	media = soma / 10;
	printf("A soma de todos os valores lidos é: %.2f\n",soma);
	printf("A média de todos os valores lidos é: %.2f",media);

return;

}
