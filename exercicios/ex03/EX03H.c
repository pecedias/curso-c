#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar a leitura de um valor num�rico inteiro que esteja na faixa de valores de 1 at� 9. O programa deve
	apresentar a mensagem "O valor est� na faixa permitida", caso o valor informado esteja entre 1 e 9. Se o valor
	estiver fora da faixa, o programa deve apresentar a mensagem "O valor est� fora da faixa permitida". 
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	int n1;
	
	printf("Digite um n�mero: ");
	scanf("%d",&n1);
	
	if(n1 >= 1 && n1 <= 9) {
		printf("O valor est� na faixa permitida!");
	} else {
		printf("O valor est� fora da faixa permitida!");
	}
	
return;

}
