#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Ler cinco valores numéricos inteiros, identificar 
	e apresentar o maior e o menor valores informados. 
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	int a, b, c, d, e,
		maior, menor;
	 
     printf("Digite o primeiro numero: ");
     scanf("%d",&a);
     
     printf("Digite o segundo numero: ");
     scanf("%d",&b);
     
     printf("Digite o terceiro numero: ");
     scanf("%d",&c);
     
     printf("Digite o quarto numero: ");
     scanf("%d",&d);
     
	 printf("Digite o quinto numero: ");
     scanf("%d",&e);
     
     maior = a;
     menor = a;
     
     if (b < menor)
        menor = b;
     if (b > maior)
        maior = b;
        
     if (c < menor)
        menor = c;
     if (c > maior)
        maior = c;
        
     if (d < menor)
        menor = d;
     if (d > maior)
        maior = d;
        
     if (e < menor)
        menor = e;
     if (e > maior)
        maior = e;
        
    printf ("O maior numero e: %d \nO menor numero e: %d",maior,menor);
		
return;

}
