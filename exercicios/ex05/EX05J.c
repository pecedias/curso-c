#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Joao Miguel De Jesus
	Desc:  Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com quatro linhas e quatro
	colunas. Apresentar o somatório dos elementos situados na diagonal principal da referida matriz.
	--------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	float matriz_a[4][4], soma = 0;
	
	for(int lin = 0; lin <= 3; lin++ ) {
		for(int col = 0; col <= 3; col++) {
		printf("Digite o Elemento [%d][%d]: ",lin, col);
		scanf("%f",&matriz_a[lin][col]);
		}
	}
	
	for(int lin = 0; lin <= 3; lin++ ) {
		for(int col = 0; col <= 3; col++) {
		printf(" %.2f | ",matriz_a[lin][col]);
		}
		printf("\n");
	}
	
	soma = matriz_a[0][0] + matriz_a[1][1] + matriz_a[2][2] + matriz_a[3][3];
	printf("A soma dos elementos situados na diagonal são: %.2f",soma);
	
return;

}
