#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* -----------------------------------------------------------------------------------------------------------------
	Autor: Paulo Cesar Bomfim Dias de Oliveira
	Desc: Em uma elei��o sindical concorreram ao cargo de presidente tr�s candidatos. Durante a apura��o dos votos
	foram computados votos nulos e em branco, al�m dos votos v�lidos para cada candidato. Deve ser criado um
	programa de computador que fa�a a leitura da quantidade de votos v�lidos para cada candidato, al�m ler
	tamb�m a quantidade de votos nulos e em branco. Ao final o programa deve apresentar o n�mero total de
	eleitores, considerando votos v�lidos, nulos e em branco; o percentual correspondente de votos v�lidos em
	rela��o � quantidade de eleitores; o percentual correspondente de votos v�lidos do candidato A em rela��o �
	quantidade de eleitores; o percentual correspondente de votos v�lidos do candidato B em rela��o � quantidade
	de eleitores; o percentual correspondente de votos v�lidos do candidato C em rela��o � quantidade de eleitores;
	o percentual correspondente de votos nulos em rela��o � quantidade de eleitores; e por �ltimo o percentual
	correspondente de votos em branco em rela��o � quantidade de eleitores. 
   ----------------------------------------------------------------------------------------------------------------- */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o Portugu�s
	
	int candidato_a, candidato_b, candidato_c,
		nulo, branco,
		total_eleitores, total_votosvalidos;
	float
		perc_votosvalidos, perc_candidato_a, perc_candidato_b, perc_candidato_c,
		perc_nulo, perc_branco;
	
	printf("O Candidado A recebeu quantos votos? ");
	scanf("%d",&candidato_a);
	
	printf("O Candidado B recebeu quantos votos? ");
	scanf("%d",&candidato_b);
	
	printf("O Candidado C recebeu quantos votos? ");
	scanf("%d",&candidato_c);
	
	printf("Qual foi a quantidade de votos nulos? ");
	scanf("%d",&nulo);	
	
	printf("Qual foi a quantidade de votos em branco? ");
	scanf("%d",&branco);
	
	total_eleitores = (candidato_a + candidato_b + candidato_c + nulo + branco);
	total_votosvalidos = (candidato_a + candidato_b + candidato_c);
	perc_votosvalidos = (total_votosvalidos * 100) / total_eleitores;
	perc_candidato_a = (candidato_a * 100) / total_eleitores;
	perc_candidato_b = (candidato_b * 100) / total_eleitores;
	perc_candidato_c = (candidato_c * 100) / total_eleitores;
	perc_nulo = (nulo * 100) / total_eleitores;
	perc_branco = (branco * 100) / total_eleitores;
	
	printf("O n�mero total de eleitores foi: %d \n",total_eleitores);
	printf("O percentual correspondente de votos v�lidos em rela��o � quantidade de eleitores foi: %.2f \n",perc_votosvalidos);
	printf("O percentual correspondente de votos v�lidos do candidato A em rela��o � quantidade de eleitores foi: %.2f \n",perc_candidato_a);
	printf("O percentual correspondente de votos v�lidos do candidato B em rela��o � quantidade de eleitores foi: %.2f \n",perc_candidato_b);
	printf("O percentual correspondente de votos v�lidos do candidato C em rela��o � quantidade de eleitores foi: %.2f \n",perc_candidato_c);
	printf("O percentual correspondente de votos nulos em rela��o � quantidade de eleitores foi: %.2f \n",perc_nulo);
	printf("O percentual correspondente de votos em branco em rela��o � quantidade de eleitores foi: %.2f \n",perc_branco);
	
return;

}
