#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e João Miguel De Jesus
	Desc: Elaborar um programa que leia valores positivos
	inteiros até que um valor negativo seja informado. Ao final
	devem ser apresentados o maior e o menor valores informados
	pelo usuário. 
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	int n1, tipo_valor = 1, maior, menor;
	
	do {
		printf("Digite um número: ");
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
	
	printf("O maior número é: %d \nE o menor número é: %d",maior, menor);
	
return;

}
