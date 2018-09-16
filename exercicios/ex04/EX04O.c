#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Jo�o Miguel De Jesus
	Desc: Elaborar um programa que apresente o resultado inteiro da divis�o de dois n�meros quaisquer,
	representando o dividendo e o divisor da divis�o a ser processada. Para a elabora��o do programa, n�o
	utilize o operador aritm�tico de divis�o com quociente inteiro DIV. Use uma solu��o baseada em la�o de
	repeti��o. O programa deve apresentar como resultado (quociente) quantas vezes o divisor cabe no
	dividendo.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	int dividendo, divisor, x = 0;
	
		
	printf("Digite o dividendo: ");
	scanf("%d",&dividendo);
	
	printf("Digite o divisor: ");
	scanf("%d",&divisor);
	
	while(dividendo > divisor) {
		x += 1;
		dividendo -= divisor;
	}	
	
	printf("Resultado: %d",x);
	
		
	
	
return;

}
