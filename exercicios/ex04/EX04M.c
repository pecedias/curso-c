#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e Jo�o Miguel De Jesus
	Desc: Escrever um programa que possibilite calcular a �rea total em metros de uma resid�ncia com os c�modos
	sala, cozinha, banheiro, dois quartos, �rea de servi�o, quintal, garagem, entre outros que podem ser
	fornecidos ao programa. O programa deve solicitar a entrada do nome, da largura e do comprimento de um
	determinado c�modo. Em seguida, deve apresentar a �rea do c�modo lido e tamb�m uma mensagem
	solicitando ao usu�rio a confirma��o de continuar calculando novos c�modos. Caso o usu�rio responda
	"N�O", o programa deve apresentar o valor total acumulado da �rea residencial.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	char nome_comodo[10], opc = 's';
	float alt, comp, area, area_total;
	
	do {
		
		printf("Qual comodo voc� deseja calcular? ");
		scanf("%s",&nome_comodo);
		fflush(stdin);
		
		printf("Qual a altura? ");
		scanf("%f",&alt);
		
		printf("Qual o comprimento? ");
		scanf("%f",&comp);
		
		area = alt * comp;
		area_total += area;
		
		printf("A Area do comodo %s �: %.2f m2\n",nome_comodo,area);
			
		printf("Deseja continuar? [S/N] ");
		scanf("%s",&opc);
		
	} while(opc == 's' || opc == 'S');
	
	printf("\nO valor total acumulado da �rea residencial �: %.2f m2",area_total);
	
return;

}
