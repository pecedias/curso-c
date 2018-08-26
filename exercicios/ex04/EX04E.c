#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
	
	/*João Miguel De Jesus e
	Paulo Dias */
	setlocale(LC_ALL,"");
	int fx, f1 = 0 ,f2 = 1,start = 0;
	for(start;start <= 15; start++){
		
		printf("%d ",f1);
		fx = f1 + f2;
		f1 = f2;
		f2 = fx;
		
	}
	
}
