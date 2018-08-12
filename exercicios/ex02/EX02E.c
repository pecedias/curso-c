#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* --------------------------------------------------------------------------------------------------------------------- 
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Ler quatro valores numéricos inteiros e apresentar o resultado das adições e das multiplicações para a máxima
	combinação possível entre as quatro variáveis. Considerando a leitura de valores para as variáveis A, B, C e D,
	devem ser feitas seis adições e seis multiplicações, ou seja, deve ser combinada a variável A com a variável B,
	a variável A com a variável C, a variável A com a variável D. Depois é necessário combinar a variável B com a
	variável C e a variável B com a variável D e, por fim, a variável C será combinada com a variável D.  
   --------------------------------------------------------------------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
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
