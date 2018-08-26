#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar a leitura de um valor numérico inteiro que esteja na faixa de valores de 1 até 9. O programa deve
	apresentar a mensagem "O valor está na faixa permitida", caso o valor informado esteja entre 1 e 9. Se o valor
	estiver fora da faixa, o programa deve apresentar a mensagem "O valor está fora da faixa permitida". 
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	int n1;
	
	printf("Digite um número: ");
	scanf("%d",&n1);
	
	if(n1 >= 1 && n1 <= 9) {
		printf("O valor está na faixa permitida!");
	} else {
		printf("O valor está fora da faixa permitida!");
	}
	
return;

}
