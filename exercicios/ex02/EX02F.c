#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------- 
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar a leitura de um valor num�rico 
	inteiro e apresentar o resultado do 
	valor lido elevado ao quadrado. 
   ---------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	int n1, quad;
	
	printf("Digite um n�mero: ");
	scanf("%d",&n1);
	
	quad = (n1 * n1);
	
	printf("O n�mero %d elevado ao quadrado �: %d",n1,quad);
	
return;

}
