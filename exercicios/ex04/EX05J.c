#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Jo�o Miguel De Jesus
	Desc: Elaborar um programa que leia sucessivamente valores
	num�ricos e apresente no final o somat�rio, a m�dia
	e o total de valores lidos. O programa deve ler os valores
	enquanto o usu�rio estiver fornecendo valores positivos. 
	Ou seja, o programa deve parar quando o usu�rio fornecer 
	um valor negativo (menor que zero).
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	float n1, soma, media;
	int tipo_valor = 1, total;
	
	while(tipo_valor == 1) {
		printf("Digite um n�mero: ");
		scanf("%f",&n1);
		
	if(n1 >= 0) {
	 	tipo_valor = 1;
	 	soma += n1;
	 	total++;
	} else {
	    tipo_valor = 0;
	}
	}
	
	media = soma / total;
	
	printf("A soma de todos os valores lidos �: %.2f \nA m�dia �: %.2f \nO total de valores lidos �: %d", soma, media, total);

return;

}
