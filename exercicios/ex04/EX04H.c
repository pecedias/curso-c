#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
	
	/*João Miguel De Jesus e
	Paulo Dias */
	
	setlocale(LC_ALL,"");
	float inicio = 1, calc,old, quadro = 1,graos = 1;
	while(inicio <= 64){
		calc = old + graos;
		printf("No quadro %.0f existe %.0f graos, totalizando o valor de %.0f graos no jogo\n",quadro,graos, calc);
		old = old + graos;
		graos = graos * 2;
		quadro++;
		inicio++;
	}
	
}
