#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Joao Miguel De Jesus
	Desc: Escrever um programa que leia três matrizes (A, B e C) de uma dimensão do tipo vetor com cinco elementos
	cada que sejam do tipo real. Construir uma matriz D, sendo esta o resultado da junção das três matrizes (A,
	B e C). Desta forma, a matriz D deve ter o triplo de elementos das matrizes A, B e C, ou seja, 15 elementos.
	Apresentar os elementos da matriz D.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	float matriz_a[5], matriz_b[5], matriz_c[5], matriz_d[15];
	
	printf("VALORES DE A: \n");
	for(int i = 1; i <= 5; i++) {
		printf("Digite o valor do Elemento [%d]: ",i);
		scanf("%f",&matriz_a[i]);
		matriz_d[i] = matriz_a[i];
	}
	
	printf("\nVALORES DE B: \n");
	for(int i = 6; i <= 10; i++) {
		printf("Digite o valor do Elemento [%d]: ",i);
		scanf("%f",&matriz_b[i]);
		matriz_d[i] = matriz_b[i];
	}
	
	printf("\nVALORES DE C: \n");
	for(int i = 11; i <= 15; i++) {
		printf("Digite o valor do Elemento [%d]: ",i);
		scanf("%f",&matriz_c[i]);
		matriz_d[i] = matriz_c[i];
	}
	
	printf("\nVALORES DE D: \n");
	for(int i = 1; i <= 15; i++) {
		printf("%.2f\n",matriz_d[i]);
	}
	
return;

}
