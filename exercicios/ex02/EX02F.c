#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------- 
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar a leitura de um valor numérico 
	inteiro e apresentar o resultado do 
	valor lido elevado ao quadrado. 
   ---------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	int n1, quad;
	
	printf("Digite um número: ");
	scanf("%d",&n1);
	
	quad = (n1 * n1);
	
	printf("O número %d elevado ao quadrado é: %d",n1,quad);
	
return;

}
