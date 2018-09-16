#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Joao Miguel De Jesus
	Desc: Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com cinco linhas e três
	colunas para valores inteiros. Construir uma matriz C de mesma dimensão, que seja formada pela soma
	dos elementos da matriz A com os elementos da matriz B. Apresentar os elementos da matriz C.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	int matriz_a[5][3], matriz_b[5][3], matriz_c[5][3];
	
	printf("Matriz A \n");
	for(int lin = 0; lin <= 4; lin++) {
		for(int col = 0; col  <= 2; col++) {
		printf("Digite o valor do Elemento [%d][%d]: ",lin,col);
		scanf("%d",&matriz_a[lin][col]);
		}
	}
	
	printf("Matriz B \n");
	for(int lin = 0; lin <= 4; lin++) {
		for(int col = 0; col  <= 2; col++) {
		printf("Digite o valor do Elemento [%d][%d]: ",lin,col);
		scanf("%d",&matriz_b[lin][col]);
		}
	}
	
	for(int lin = 0; lin <= 4; lin++) {
		for(int col = 0; col  <= 2; col++) {
		matriz_c[lin][col] = matriz_a[lin][col] + matriz_b[lin][col];
		}
	}
	
	printf("Matriz C \n");
	for(int lin = 0; lin <= 4; lin++) {
		for(int col = 0; col  <= 2; col++) {
		printf(" %d |",matriz_c[lin][col]);
		}
		printf("\n");
	}
	
return;


}
