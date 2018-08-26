#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Ler três valores inteiros e apresentar os valores 
	lidos dispostos em ordem crescente
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	int a, b, c;
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&a);
	
	printf("Digite o segundo valor: ");
	scanf("%d",&b);
	
	printf("Digite o terceiro valor: ");
	scanf("%d",&c);
	
	if(a < b && b < c) {
		printf("%d %d %d",a,b,c);
	} else if (a < c && c < b) {
		printf("%d %d %d",a,c,b);
	} else if (b < c && c < a) {
		printf("%d %d %d",b,c,a);
	} else if (b < a && a < c) {
		printf("%d %d %d",b,a,c);
	} else if (c < a && a < b) {
		printf("%d %d %d",c,a,b);
	} else if (c < b && c < a) {
		printf("%d %d %d",c,b,a);
	}
	

return;

}
