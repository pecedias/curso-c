#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Joao Miguel De Jesus
	Desc: Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões com sete linhas e sete colunas. 
	Construir a matriz B de mesma dimensão em que cada elemento seja o somatório de 1 até o valor armazenado na posição da matriz A, 
	com exceção dos valores situados nos índices ímpares da diagonal principal (B[1,1]; B[3,3]; 8[5,5] e 8[7,7]), 
	os quais devem ser o fatorial de cada elemento correspondente da matriz A. Apresentar ao final a matriz B. 
   --------------------------------------------------------- */


int main (void){
	setlocale(LC_ALL,"");
	int matrizA[7][7];
	int matrizB[7][7];
	int i, fatorial,valor = 0;
	int x,index;
	for(i = 0; i < 14; i++){
		if(i < 7){
			printf("Digite o %dº valor da dimensão 1\n",(i+1));
			scanf("%d",&matrizA[i][0]);
		}else{
			printf("Digite o %dº valor da dimensão 2\n",(i-6));
			scanf("%d",&matrizA[i][1]);
		}
		
	}
	for(i = 0; i < 14; i++){
		if(i < 7){
				if(matrizA[i][0]%2==0 && matrizA[i][1]%2== 0){
				valor = matrizA[i][0];
				valor = valor + i;
					if(valor == 1){
						matrizB[i][0] = 1;
					}else{
						for(fatorial = 1; valor > 1; valor = valor - 1){
	 					fatorial = fatorial * valor;
	 					matrizB[i][0] = fatorial;
						}
					}	
				}	
		}else{
			valor = 0;
			index = i - 7;
			if(matrizA[index][0]%2==0 && matrizA[index][1]%2== 0){
				valor = matrizA[index][1];
				valor = valor + index;
					if(valor == 1){
						matrizB[index][1] = 1;
					}else{
						for(fatorial = 1; valor > 1; valor = valor - 1){
	 					fatorial = fatorial * valor;
	 					matrizB[index][1] = fatorial;
						}
					}	
				}	
			}
 }
	for(x = 0; x < 7; x++){
		printf("MatrizB[%d][%d]\n",matrizB[x][0],matrizB[x][1]);
	}
	
}
