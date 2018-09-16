#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e João Miguel De Jesus
	Desc: Construir um programa que apresente como resultado
	a fatorial dos valores ímpares situados na faixa
	numérica de 1 até 10.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
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
