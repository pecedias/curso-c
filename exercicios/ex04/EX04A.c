#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (void){
	/*João Miguel De Jesus e
	Paulo Dias */
	setlocale(LC_ALL,"");
	int start = 15;
	int finish = 200;
	for(start; start <= finish; start++){
		
		int quadrado = pow(start,2);
		printf("O quadrado do numero %d é %d\n",start,quadrado);
		
		
	}
	
	
	
}
