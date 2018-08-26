#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* ---------------------------------------------------------
	Autores: Paulo Cesar Bomfim Dias de Oliveira e João Miguel De Jesus
	Desc: Escrever um programa que possibilite calcular a área total em metros de uma residência com os cômodos
	sala, cozinha, banheiro, dois quartos, área de serviço, quintal, garagem, entre outros que podem ser
	fornecidos ao programa. O programa deve solicitar a entrada do nome, da largura e do comprimento de um
	determinado cômodo. Em seguida, deve apresentar a área do cômodo lido e também uma mensagem
	solicitando ao usuário a confirmação de continuar calculando novos cômodos. Caso o usuário responda
	"NÃO", o programa deve apresentar o valor total acumulado da área residencial.
   --------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
	
	char nome_comodo[10], opc = 's';
	float alt, comp, area, area_total;
	
	do {
		
		printf("Qual comodo você deseja calcular? ");
		scanf("%s",&nome_comodo);
		fflush(stdin);
		
		printf("Qual a altura? ");
		scanf("%f",&alt);
		
		printf("Qual o comprimento? ");
		scanf("%f",&comp);
		
		area = alt * comp;
		area_total += area;
		
		printf("A Area do comodo %s é: %.2f m2\n",nome_comodo,area);
			
		printf("Deseja continuar? [S/N] ");
		scanf("%s",&opc);
		
	} while(opc == 's' || opc == 'S');
	
	printf("\nO valor total acumulado da área residencial é: %.2f m2",area_total);
	
return;

}
