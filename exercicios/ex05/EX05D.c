#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Joao Miguel De Jesus
	Desc: Elaborar um programa que leia duas matrizes do tipo vetor para o armazenamento de nomes de pessoas,
	sendo a matriz A com 20 elementos e a matriz B com 30 elementos. Construir uma matriz C, sendo esta a
	junção das matrizes A e B. Desta forma, a matriz C deve ter a capacidade de armazenar 50 elementos.
	Apresentar os elementos da matriz C
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	char matriz_a[20][10], matriz_b[30][10], matriz_c[50][10];
	
	printf("NOMES DA LISTA A\n");
	for(int i = 1; i <= 20; i++) {
		printf("Digite o nome do Elemento [%d]: ",i);
		gets(matriz_a[i]);
		strcpy(matriz_c[i], matriz_a[i]);
	}
	
	printf("\nNOMES DA LISTA B\n");
	for(int i = 20; i <= 50; i++) {
		printf("Digite o nome do Elemento [%d]: ",i);
		gets(matriz_b[i]);
		strcpy(matriz_c[i], matriz_b[i]);
	}
	
	printf("\nNOMES DA LISTA C\n");
	for(int i = 1; i <= 50; i++) {
		printf("%s\n",matriz_c[i]);
	}
	
return;

}
