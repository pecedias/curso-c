#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Jo�o Miguel De Jesus
	Desc: Elaborar um programa que apresente os resultados
	da soma e da m�dia aritm�tica dos valores pares
	situados na faixa num�rica de 50 at� 70.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	int n = 50, soma = 0, i = 0;
	float media;
	
	do {
		
	if(n % 2 == 0) {
		printf("%d\n",n);
		soma += n;
		i++;
	}
	
	n++;
	
	} while(n <= 70);
	
	media = soma / i;
	
	printf("A soma de todos os valores pares entre 50 e 70 �: %d\n",soma);
	printf("E a m�dia �: %.2f",media);
	
return;

}
