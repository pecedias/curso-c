#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
	
	/*Jo�o Miguel De Jesus e
	Paulo Dias */
	setlocale(LC_ALL,"");
	
	int inicio = 1, calc;
	while(inicio <= 200){
		calc = inicio % 4;
		if(calc == 0){
			printf("%d � um numero divisivel por 4\n",inicio);
			
		}
		inicio++;
		
	}
	
}
