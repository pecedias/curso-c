#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
	/*João Miguel De Jesus e
	Paulo Dias */
	int calc,i;
	setlocale(LC_ALL,"");
	for(i = 1; i <= 100; i++){
		calc = calc + i;
		
	}
	printf("O valor da soma dos numeros naturais de 1 até 100 é igual a %d",calc);
	
	
	
	
}
