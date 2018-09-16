#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Joao Miguel De Jesus
	Desc: Elaborar um programa que leia uma matriz A de duas dimensões com quatro linhas e cinco colunas,
	armazenando nessa matriz os valores das temperaturas em graus Celsius. Construir a matriz B de mesma
	dimensão, em que cada elemento seja o valor da temperatura em graus Fahrenheit de cada elemento
	correspondente da matriz A. Apresentar ao final as matrizes A e B.
	   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	float matriz_a[4][5], matriz_b[4][5];
	
	for(int lin = 0; lin <= 3; lin++ ) {
		for(int col = 0; col <= 4; col++) {
		printf("Digite o Elemento [%d][%d] temperatura em graus Celsius: ",lin, col);
		scanf("%f",&matriz_a[lin][col]);
		matriz_b[lin][col] = (9 * matriz_a[lin][col] + 160) / 5;
		}
	}
	
	printf("Matriz A em graus Celsius\n");
	for(int lin = 0; lin <= 3; lin++ ) {
		for(int col = 0; col <= 4; col++) {
			printf(" %.1f |",matriz_a[lin][col]);
		}
		printf("\n");
	}
	
	printf("\nMatriz B em graus Fahrenheit\n");
	for(int lin = 0; lin <= 3; lin++ ) {
		for(int col = 0; col <= 4; col++) {
			printf(" %.1f |",matriz_b[lin][col]);
		}
		printf("\n");
	}
		
		
		
return;

}
