#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Jo�o Miguel De Jesus
	Desc: Elaborar um programa que leia valores positivos
	inteiros at� que um valor negativo seja informado. Ao final
	devem ser apresentados o maior e o menor valores informados
	pelo usu�rio. 
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	int n1, tipo_valor = 1, maior, menor;
	
	do {
		printf("Digite um n�mero: ");
		scanf("%d",&n1);

	if(n1 >= 0) {
	 	tipo_valor = 1;	
	 	maior = 0;
		menor = 0;	 
	
   	} else {
	    tipo_valor = 0;
	}
	
	if (n1 < menor) {
        menor = n1;
    }
    
    if (n1 > maior) {
        maior = n1;
	}
	
	} while(tipo_valor == 1);
	
	printf("O maior n�mero �: %d \nE o menor n�mero �: %d",maior, menor);
	
return;

}
