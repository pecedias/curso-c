#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------- 
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Ler uma temperatura em graus Celsius e
	apresent�-la convertida em graus Fahrenheit. 
   ---------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	int graus_celsius, graus_fahrenheit;
		
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%d",&graus_celsius);
		
	graus_fahrenheit = (9 * graus_celsius + 160) / 5;
		
	printf("\nA temperatura %d�C convertida em graus Fahrenheit �: %d�F\n",graus_celsius, graus_fahrenheit);
		
return;	

}
