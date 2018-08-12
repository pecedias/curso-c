#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------- 
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Ler uma temperatura em graus Celsius e
	apresentá-la convertida em graus Fahrenheit. 
   ---------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	int graus_celsius, graus_fahrenheit;
		
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%d",&graus_celsius);
		
	graus_fahrenheit = (9 * graus_celsius + 160) / 5;
		
	printf("\nA temperatura %d°C convertida em graus Fahrenheit é: %d°F\n",graus_celsius, graus_fahrenheit);
		
return;	

}
