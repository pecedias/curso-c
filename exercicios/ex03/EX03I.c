#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar a leitura de um nome e o sexo de uma pessoa e apresentar como saída uma das seguintes mensagens:
	"llmo, Sr,", caso seja informado o sexo masculino, ou "llma, Sra,", caso seja informado o sexo feminino. Após a
	mensagem de saudação, apresentar o nome informado. O programa deve, após a entrada do sexo, verificar
	primeiramente se o sexo fornecido é realmente válido, ou seja, se é igual a "M" ou a "F". Não sendo essa
	condição verdadeira, o programa deve apresentar a mensagem "Sexo informado inválido".

   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
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
		printf("Sexo informado inválido!");
	}
	
return;

}
