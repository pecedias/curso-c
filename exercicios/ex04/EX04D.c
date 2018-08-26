#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
	
	/*João Miguel De Jesus e
	Paulo Dias */
	setlocale(LC_ALL,"");
	int calc,i;
	float bs,ex;
	printf("Digite o valor para base\n");
	scanf("%f",&bs);
	printf("Digite o valor para expoente\n");
	scanf("%f",&ex);
	if((bs - (int)bs) == 0 && bs > 0 && (ex - (int)ex) == 0 && ex > 0){
		for(i = 0; i <= ex; i++){
			calc = i * bs;
			printf("O valor de %d vezes a base(%.0f) é de %d\n",i,bs,calc);
		}
	}else{
		printf("Você deve utilizar apenas valores naturais e que seja positivo.\n");
	}
	
	
}
