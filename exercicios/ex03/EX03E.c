#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Fazer a leitura de 4 valores numéricos inteiros. 
	Apresentar apenas os valores que sejam divisíveis por 2 e 3
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	int a, b, c, d;
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&a);
	
	printf("Digite o segundo valor: ");
	scanf("%d",&b);
	
	printf("Digite o terceiro valor: ");
	scanf("%d",&c);
	
	printf("Digite o quarto valor: ");
	scanf("%d",&d);
	
	if(a % 2 == 0) {
		printf("%d é divisivel por 2\n",a);
	} if(b % 2 == 0) {
		printf("%d é divisivel por 2\n",b);
	} if(c % 2 == 0) {
		printf("%d é divisivel por 2\n",c);
	} if(d % 2 == 0) {
		printf("%d é divisivel por 2\n",d);
	}
	
	if(a % 3 == 0) {
		printf("%d é divisivel por 3\n",a);
	} if(b % 3 == 0) {
		printf("%d é divisivel por 3\n",b);
	} if(c % 3 == 0) {
		printf("%d é divisivel por 3\n",c);
	} if(d % 3 == 0) {
		printf("%d é divisivel por 3",d);
	}
	
return;

}
