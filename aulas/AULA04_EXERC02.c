#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------- 
	Desenvolvido por: Paulo Dias
	Desc: 
   ---------------------------------------------- */

int main() {
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	int a;
	int b;
	int maior;
	int menor;
	printf("Digite o A: ");
	scanf("%d",&a);
	printf("Digite o B: ");
	scanf("%d",&b);
	if(a > b) {
		maior = a;
		menor = b;
	} else {
		maior = b;
		menor = a;
	}
	printf("O maior � %d e o menor � %d",maior,menor);
return;	
}
