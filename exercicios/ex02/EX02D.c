#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ------------------------------------------------------------------------------------------------------------------ 
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Ler dois valores para as variáveis A e B e efetuar a troca dos valores de forma que a variável A passe a 
	possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar os valores 
	após a efetivaçãodo processamento da troca. 
   ------------------------------------------------------------------------------------------------------------------ */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	int a, b, aux;
	
	printf("Digite o valor do A: ");
	scanf("%d",&a);
	
	printf("Digite o valor de B: ");
	scanf("%d",&b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("Agora A vale: %d e B vale: %d",a,b);
	
return;
	
}
