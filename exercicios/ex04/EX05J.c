#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e João Miguel De Jesus
	Desc: Elaborar um programa que leia sucessivamente valores
	numéricos e apresente no final o somatório, a média
	e o total de valores lidos. O programa deve ler os valores
	enquanto o usuário estiver fornecendo valores positivos. 
	Ou seja, o programa deve parar quando o usuário fornecer 
	um valor negativo (menor que zero).
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	float n1, soma, media;
	int tipo_valor = 1, total;
	
	while(tipo_valor == 1) {
		printf("Digite um número: ");
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
	
	printf("A soma de todos os valores lidos é: %.2f \nA média é: %.2f \nO total de valores lidos é: %d", soma, media, total);

return;

}
