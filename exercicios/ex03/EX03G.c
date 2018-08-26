#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Ler um valor numérico inteiro, apresentar uma mensagem
	informando se o valor fornecido é par ou ímpar. 
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	int n1;
	
	printf("Digite um número: ");
	scanf("%d",&n1);
	
	if(n1 % 2 == 0) {
		printf("O número %d é PAR!",n1);
	} else {
		printf("O número %d é IMPAR!",n1);
	}
	
return;

}
