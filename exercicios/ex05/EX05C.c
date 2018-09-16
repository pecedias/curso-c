#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Joao Miguel De Jesus
	Desc:Elaborar um programa que leia uma matriz A do tipo vetor com 15 elementos inteiros. 
	Construir uma matriz B de mesmo tipo, e cada elemento da matriz B deve ser o resultado da fatorial correspondente de cada elemento da matriz A. 
	Apresentar as matrizes A e B. 
   --------------------------------------------------------- */


int main(void){
	setlocale(LC_ALL,"");
	int vectA[20], vectB[20];
	int i, valor, x, fatorial;
	for(i = 0; i < 20; i++){
		printf("Digite o %dº valor\n",(i+1));
		scanf("%d",&vectA[i]);
		valor = vectA[i];
		if(valor == 1){
			vectB[i] = 1;
		}else{
			for(fatorial = 1; valor > 1; valor = valor - 1){
	 		fatorial = fatorial * valor;
	 		vectB[i] = fatorial;
		 }
		}
	 	
		
	}
	for(x = 0; x < 20; x++){
		printf("MatrizA[%d] é igual %d, matrizB[%d] é igual a %d\n",x,vectA[x],x,vectB[x]);
	}
	
	
}
