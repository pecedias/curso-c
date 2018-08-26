#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar a leitura de tr�s valores inteiros desconhecidos, 
	somar os valores fornecidos e apresentar o resultado
	somente se for maior ou igual a 100

   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	int n1, n2, n3, soma;
	
	printf("Digite 3 n�meros: \n");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	soma = n1 + n2 + n3;
	
	if(soma >= 100) {
		printf("A soma total dos valores �: %d",soma);
	}
 
return;

}
