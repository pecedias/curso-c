#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Joao Miguel De Jesus
	Desc: Escrever um programa que leia duas matrizes A e B do tipo vetor com 20 elementos reais. Construir uma
	matriz C, sendo cada elemento da matriz C a subtração de um elemento correspondente da matriz A com
	um elemento correspondente da matriz B. Ao final, apresentar os elementos da matriz C.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	float matriz_a[10], matriz_b[10], matriz_c[10];
	
	printf("ELEMENTOS DE A\n");
	for(int count = 1; count <= 10; count++) {
	printf("Digite o valor do Elemento [%d]: ",count);
	scanf("%f",&matriz_a[count]);
	}
	
	printf("\nELEMENTOS DE B\n");
	for(int count = 1; count <= 10; count++) {
	printf("Digite o valor do Elemento [%d]: ",count);
	scanf("%f",&matriz_b[count]);
	}
	
	for(int count = 1; count <= 10; count++) {
	matriz_c[count] = matriz_a[count] - matriz_b[count];
	}
	printf("\nELEMENTOS DE C\n");
	for(int count = 1; count <= 10; count++) {
	printf("%.2f - %.2f = %.2f\n",matriz_a[count], matriz_b[count], matriz_c[count]);
	}
	
return;

}
