#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Jo�o Miguel De Jesus
	Desc: Construir um programa que apresente como resultado
	a fatorial dos valores �mpares situados na faixa
	num�rica de 1 at� 10.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	int n, i, fatorial;
	
	  for(n=0 ; n<=10; n++){
	  if(n % 2 !=0){
	  fatorial = 1;
	  i = 1;
	  while (i <= n) {
		fatorial = fatorial * i;
		i++;	
	  }
	  printf("%d! = %d\n", n, fatorial);
	  }
	  }
	
return;

}
