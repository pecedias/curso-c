#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* --------------------------------------------------------------------------------------------------------------------- 
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Ler quatro valores num�ricos inteiros e apresentar o resultado das adi��es e das multiplica��es para a m�xima
	combina��o poss�vel entre as quatro vari�veis. Considerando a leitura de valores para as vari�veis A, B, C e D,
	devem ser feitas seis adi��es e seis multiplica��es, ou seja, deve ser combinada a vari�vel A com a vari�vel B,
	a vari�vel A com a vari�vel C, a vari�vel A com a vari�vel D. Depois � necess�rio combinar a vari�vel B com a
	vari�vel C e a vari�vel B com a vari�vel D e, por fim, a vari�vel C ser� combinada com a vari�vel D.  
   --------------------------------------------------------------------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	int a, b, c, d,
		soma1, soma2, soma3, soma4, soma5, soma6,
		mult1, mult2, mult3, mult4, mult5, mult6;
	
	printf("Digite o valor de A: ");
	scanf("%d",&a);
	printf("Digite o valor de B: ");
	scanf("%d",&b);
	printf("Digite o valor de C: ");
	scanf("%d",&c);
	printf("Digite o valor de D: ");
	scanf("%d",&d);
	
	soma1 = (a + b);
	soma2 = (a + c);
	soma3 = (a + d);
	soma4 = (b + c);
	soma5 = (b + d);
	soma6 = (c + d);
	mult1 = (a * b);
	mult2 = (a * c);
	mult3 = (a * d);
	mult4 = (b * c);
	mult5 = (b * d);
	mult6 = (c * d);
	
	printf("A + B = %d\n", soma1);
	printf("A + C = %d\n", soma2);
	printf("A + D = %d\n", soma3);
	printf("B + C = %d\n", soma4);
	printf("B + D = %d\n", soma5);
	printf("C + D = %d\n", soma6);
	printf("A * B = %d\n", mult1);
	printf("A * C = %d\n", mult2);
	printf("A * D = %d\n", mult3);
	printf("B * C = %d\n", mult4);
	printf("B * D = %d\n", mult5);
	printf("C * D = %d\n", mult6);
	
return;

}
