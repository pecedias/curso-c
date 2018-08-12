#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ------------------------------------------------------------------------------------------------------------------ 
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Ler dois valores para as vari�veis A e B e efetuar a troca dos valores de forma que a vari�vel A passe a 
	possuir o valor da vari�vel B e a vari�vel B passe a possuir o valor da vari�vel A. Apresentar os valores 
	ap�s a efetiva��odo processamento da troca. 
   ------------------------------------------------------------------------------------------------------------------ */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
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
