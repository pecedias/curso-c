#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar a leitura de tr�s valores num�ricos e processar o c�lculo da equa��o completa de segundo grau,
	utilizando a f�rmula de Bhaskara (considerar para a solu��o do problema todas as poss�veis condi��es para
	delta: delta < 0 - n�o h� solu��o real, delta > 0 - h� duas solu��es reais e diferentes e delta = 0 - h� apenas
	uma solu��o real). Lembre-se de que � completa a equa��o de segundo grau que possui todos os coeficientes
	A, B e C diferentes de zero. O programa deve apresentar respostas para todas as condi��es estabelecidas para
	delta. 
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	float a, b, c,
		  delta, x1, x2;
	
	printf("Digite o coeficiente de A: \n");
	scanf("%f",&a);
	
	printf("Digite o coeficiente de B: \n");
	scanf("%f",&b);
	
	printf("Digite o coeficiente de C: \n");
	scanf("%f",&c);
	
	delta = (b*b) - 4*a*c;
 	
 	if(a != 0 && b != 0 && c != 0) {
 		
	if(delta < 0) {
		printf("N�o h� solu��o real\n");
	} else if(delta == 0) {
		x1 = -b / 2*a;
		printf("H� apenas uma solu��o real: %d \n",x1);
	} else if(delta > 0) {
		printf("H� duas solu��es reais e diferentes\n");
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("O valor de x1: %.2f: \ne o valor de x2 e: %.2f",x1,x2);
	} 

	} else {
		printf("Equa��o incompleta, pois os coeficientes que de ser diferentes de 0.");
	}
	
return;	
	
}
