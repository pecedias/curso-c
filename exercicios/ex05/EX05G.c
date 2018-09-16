#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Joao Miguel De Jesus
	Desc: Elaborar um programa que leia duas matrizes A e B cada uma com uma dimensão para 12 elementos reais. 
	Construir uma matriz C de duas dimensões, 
	sendo a primeira coluna da matriz C formada pelos elementos da matriz A multiplicados por 2 e a segunda coluna formada pelos elementos da matriz B subtraídos de 5.
	Apresentar separadamente as matrizes.
   --------------------------------------------------------- */


int main (void){
	setlocale(LC_ALL,"");
	int vetorA[12];
	int vetorB[12];
	int matriz[12][2];
	int i, x, y;
	for(i = 0; i < 13; i++){
		printf("Digite o %dº valor para A\n",(i+1));
		scanf("%d",&vetorA[i]);
		fflush(stdin);
		printf("Digite o %dº valor para B\n",(i+1));
		scanf("%d",&vetorB[i]);
		
		int calc = vetorA[i] * 2;
		int sub = vetorB[i] - 5;
		
		matriz[i][0] = calc;
		matriz[i][1] = sub;
	}
	printf("A primeira dimensão corresponde ao valor multiplicado (* 2) de A e a segunda dimensão do valor subtraido (-5) de B\n");
	for(i = 0; i < 13; i++){
			printf("matriz[%d][%d]\n",matriz[i][0],matriz[i][1]);
	}

	
}
