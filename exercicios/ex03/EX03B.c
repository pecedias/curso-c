#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Ler os valores de quatro notas escolares bimestrais de um aluno. Calcular a média aritmética desse aluno e
	apresentar a mensagem "Aprovado" se a média obtida for maior ou igual a 7; caso contrário, o programa deve
	solicitar a quinta nota (nota de exame) do aluno e calcular uma nova média aritmética entre a nota de exame e
	a primeira média aritmética. Se o valor da nova média for maior ou igual a sete, apresentar a mensagem
	"Aprovado em exame"; caso contrário, apresentar a mensagem "Reprovado". Informar também, após a
	apresentação das mensagens, o valor da média obtida pelo aluno..
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	float nota1, nota2, nota3, nota4,
		  media, nova_media, exame;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);

	printf("Digite a terceira nota: ");
	scanf("%f",&nota3);
	
	printf("Digite a quarta nota: ");
	scanf("%f",&nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	if(media >= 7) {
		printf("Aprovado!\n");
		printf("Sua nota foi: %.1f",media);
	} else if(media < 7) {
		printf("Digite a nota do exame: ");
		scanf("%f",&exame);
		nova_media = (media + exame);
		
		} if(nova_media >= 7) {
			printf("Aprovado em exame!\n");
			printf("Sua nota foi: %.1f",nova_media);
		} else {
			printf("Reprovado!\n");
			printf("Sua nota foi: %.1f",nova_media);
		}
	
return;

}
