#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar a leitura de três valores inteiros desconhecidos, 
	somar os valores fornecidos e apresentar o resultado
	somente se for maior ou igual a 100

   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	int n1, n2, n3, soma;
	
	printf("Digite 3 números: \n");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	soma = n1 + n2 + n3;
	
	if(soma >= 100) {
		printf("A soma total dos valores é: %d",soma);
	}
 
return;

}
