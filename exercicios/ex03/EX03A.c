#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar leitura de dois valores num�ricos inteiros
	e apresentar o resultado da diferen�a do maior valor pelo
	menor valor.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	int n1, n2, diferenca;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&n1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%d",&n2);

	diferenca = n1 - n2;
	
	printf("A diferen�a de %d para %d �: %d", n1, n2, diferenca);

return;

}
