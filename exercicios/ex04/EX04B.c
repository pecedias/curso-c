#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
	/*João Miguel De Jesus e
	Paulo Dias */
	setlocale(LC_ALL,"");
	int numero, calc,i;
	printf("digite o numero ao qual deseja saber a tabuada\n");
	scanf("%d",&numero);
	for(i = 0; i <= 10; i++){
		calc = numero * i;
		printf("%dx%d=%d\n",numero,i,calc);

	}
	
	
	
	
}
