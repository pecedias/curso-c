#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar leitura de dois valores numéricos inteiros
	e apresentar o resultado da diferença do maior valor pelo
	menor valor.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	int n1, n2, diferenca;
	
	printf("Digite o primeiro número: ");
	scanf("%d",&n1);
	
	printf("Digite o segundo número: ");
	scanf("%d",&n2);

	diferenca = n1 - n2;
	
	printf("A diferença de %d para %d é: %d", n1, n2, diferenca);

return;

}
