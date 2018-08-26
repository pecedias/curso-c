#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar a leitura de um nome e o sexo de uma pessoa e apresentar como sa�da uma das seguintes mensagens:
	"llmo, Sr,", caso seja informado o sexo masculino, ou "llma, Sra,", caso seja informado o sexo feminino. Ap�s a
	mensagem de sauda��o, apresentar o nome informado. O programa deve, ap�s a entrada do sexo, verificar
	primeiramente se o sexo fornecido � realmente v�lido, ou seja, se � igual a "M" ou a "F". N�o sendo essa
	condi��o verdadeira, o programa deve apresentar a mensagem "Sexo informado inv�lido".

   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	char nome[30], sexo;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("Digite seu sexo: ");
	scanf("%c",&sexo);
	
	if(sexo == 'M' || sexo == 'F') {
	 
	if (sexo == 'M') {
		printf("llmo, Sr, %s",nome);
	} else {
	 	printf("llma, Sra, %s",nome);
	}
	
	} else {
		printf("Sexo informado inv�lido!");
	}
	
return;

}
