#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
	
	/*João Miguel De Jesus e
	Paulo Dias */
	setlocale(LC_ALL,"");
	
	int inicio = 10, calc;
	while(inicio <= 100){
		calc = (9 * inicio+160)/5;
		printf("A temperatura de %d graus convertida em fahrenheit é %d\n",inicio,calc);

		inicio = inicio + 10;
		
	}
	
}
