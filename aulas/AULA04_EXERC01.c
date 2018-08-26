#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------- 
	Desenvolvido por: Paulo Dias
	Desc: Fazer a leitura de um valor relacionado a medida de um termômetro.
   ---------------------------------------------- */

int main() {
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	float temp;
	printf("Digite a temperatura: ");
	scanf("%f",&temp);
	if(temp > 37.5) {
		printf("O Paciente esta com febre.\n");
	} 
	printf("Cuide-se sempre!");	
return;	
}
