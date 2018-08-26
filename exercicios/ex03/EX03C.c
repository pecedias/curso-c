#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar a leitura de três valores numéricos e processar o cálculo da equação completa de segundo grau,
	utilizando a fórmula de Bhaskara (considerar para a solução do problema todas as possíveis condições para
	delta: delta < 0 - não há solução real, delta > 0 - há duas soluções reais e diferentes e delta = 0 - há apenas
	uma solução real). Lembre-se de que é completa a equação de segundo grau que possui todos os coeficientes
	A, B e C diferentes de zero. O programa deve apresentar respostas para todas as condições estabelecidas para
	delta. 
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
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
		printf("Não há solução real\n");
	} else if(delta == 0) {
		x1 = -b / 2*a;
		printf("Há apenas uma solução real: %d \n",x1);
	} else if(delta > 0) {
		printf("Há duas soluções reais e diferentes\n");
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("O valor de x1: %.2f: \ne o valor de x2 e: %.2f",x1,x2);
	} 

	} else {
		printf("Equação incompleta, pois os coeficientes que de ser diferentes de 0.");
	}
	
return;	
	
}
