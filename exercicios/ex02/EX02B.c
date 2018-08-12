#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ------------------------------------------------------------------------------------------------------------------  
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que
	faz 12 quilômetros por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto e a velocidade média
	durante a viagem. A partir do valor da distância, basta calcular a quantidade de litros de combustível utilizada
	na viagem. O programa deve apresentar os valores da velocidade média, tempo gasto na viagem, a distância 
	percorrida e a quantidade de litros utilizada na viagem. 
   ------------------------------------------------------------------------------------------------------------------ */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	int tempo_gasto, vel_media, dist_percorrida, lit_usados;
	
	printf("Olá! Qual foi o tempo gasto na viagem? ");
	scanf("%d",&tempo_gasto);
	
	printf("\nAgora digite a velocidade média da viagem: ");
	scanf("%d",&vel_media);
	
	dist_percorrida = (tempo_gasto * vel_media);
	lit_usados = (dist_percorrida / 12);
	
	printf("\nCom uma velocidade média de %dKm o tempo gasto \nfoi %dh com a distância percorrida de %dKm\ne gastou %d litros durante a viagem.\n",vel_media
	,tempo_gasto,dist_percorrida,lit_usados);
	
return;
	
}
