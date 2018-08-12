#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ------------------------------------------------------------------------------------------------------------------  
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar o c�lculo da quantidade de litros de combust�vel gasta em uma viagem, utilizando um autom�vel que
	faz 12 quil�metros por litro. Para obter o c�lculo, o usu�rio deve fornecer o tempo gasto e a velocidade m�dia
	durante a viagem. A partir do valor da dist�ncia, basta calcular a quantidade de litros de combust�vel utilizada
	na viagem. O programa deve apresentar os valores da velocidade m�dia, tempo gasto na viagem, a dist�ncia 
	percorrida e a quantidade de litros utilizada na viagem. 
   ------------------------------------------------------------------------------------------------------------------ */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	int tempo_gasto, vel_media, dist_percorrida, lit_usados;
	
	printf("Ol�! Qual foi o tempo gasto na viagem? ");
	scanf("%d",&tempo_gasto);
	
	printf("\nAgora digite a velocidade m�dia da viagem: ");
	scanf("%d",&vel_media);
	
	dist_percorrida = (tempo_gasto * vel_media);
	lit_usados = (dist_percorrida / 12);
	
	printf("\nCom uma velocidade m�dia de %dKm o tempo gasto \nfoi %dh com a dist�ncia percorrida de %dKm\ne gastou %d litros durante a viagem.\n",vel_media
	,tempo_gasto,dist_percorrida,lit_usados);
	
return;
	
}
