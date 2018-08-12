#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------- 
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Elaborar um programa que leia o valor 
	num�rico correspondente ao sal�rio mensal de 
	um trabalhador e tamb�m fa�a a leitura do valor
	do percentual de reajuste a ser atribu�do. 
	Apresentar o valor do novo sal�rio. 
   ---------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	float salario, reajuste, calc;
	
	printf("Por favor, digite o seu sal�rio mensal: R$");
	scanf("%f",&salario);
	
	printf("Agora, digite o valor do percentual de reajuste a ser atribu�do: ");
	scanf("%f",&reajuste);
	
	calc = (salario * reajuste) / 100;
	salario += calc;
	
	printf("Seu novo sal�rio ser� de R$%.2f",salario); 
	
return;

}
