#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Ler um valor num�rico inteiro, apresentar uma mensagem
	informando se o valor fornecido � par ou �mpar. 
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	int n1;
	
	printf("Digite um n�mero: ");
	scanf("%d",&n1);
	
	if(n1 % 2 == 0) {
		printf("O n�mero %d � PAR!",n1);
	} else {
		printf("O n�mero %d � IMPAR!",n1);
	}
	
return;

}
