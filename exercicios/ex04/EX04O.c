#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e João Miguel De Jesus
	Desc: Elaborar um programa que apresente o resultado inteiro da divisão de dois números quaisquer,
	representando o dividendo e o divisor da divisão a ser processada. Para a elaboração do programa, não
	utilize o operador aritmético de divisão com quociente inteiro DIV. Use uma solução baseada em laço de
	repetição. O programa deve apresentar como resultado (quociente) quantas vezes o divisor cabe no
	dividendo.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
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
