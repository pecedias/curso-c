#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Joao Miguel De Jesus
	Desc: Elaborar um programa que efetue a leitura de dez nomes
	de pessoas em uma matriz A do tipo vetor e apresentá-los em seguida.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	char nome[10][10];
	
	for(int count = 1; count <= 10; count++) {
	printf("Digite o nome do Elemento [%d]: ",count);
	scanf("%s",&nome[count]);
	}
	printf("Os nomes digitados foram: \n");
	for(int count = 1; count <= 10; count++) {
	printf("%s\n",nome[count]);
	}
	
return;

}
