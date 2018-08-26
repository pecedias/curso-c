#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------- 
	Desenvolvido por: Paulo Dias
   ---------------------------------------------- */

int main() {
	setocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	float v1;
	float v2;
	float soma;
	printf("Digite o primeiro valor: ");
	scanf("%f",&v1);
	printf("Digite o segundo valor: ");
	scanf("%f",&v2);
	soma = v1 + v2;
	if(soma >= 10) {
		soma + 5;
	} else {
		soma - 7;
	}
	printf("O resultado de soma é %f ",soma);
	
return;	
}
