#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------- 
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Elaborar um programa que leia o valor 
	numérico correspondente ao salário mensal de 
	um trabalhador e também faça a leitura do valor
	do percentual de reajuste a ser atribuído. 
	Apresentar o valor do novo salário. 
   ---------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	float salario, reajuste, calc;
	
	printf("Por favor, digite o seu salário mensal: R$");
	scanf("%f",&salario);
	
	printf("Agora, digite o valor do percentual de reajuste a ser atribuído: ");
	scanf("%f",&reajuste);
	
	calc = (salario * reajuste) / 100;
	salario += calc;
	
	printf("Seu novo salário será de R$%.2f",salario); 
	
return;

}
