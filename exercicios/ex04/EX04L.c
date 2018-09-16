#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e João Miguel De Jesus
	Desc: Elaborar um programa que apresente os resultados
	da soma e da média aritmética dos valores pares
	situados na faixa numérica de 50 até 70.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
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
	
	printf("A soma de todos os valores pares entre 50 e 70 é: %d\n",soma);
	printf("E a média é: %.2f",media);
	
return;

}
