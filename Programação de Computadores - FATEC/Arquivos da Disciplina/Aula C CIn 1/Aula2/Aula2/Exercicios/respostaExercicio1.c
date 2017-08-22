/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * respostaExercício1.c - Resposta ao primeiro exercício da segunda aula.
 */

#include <stdio.h>
#include <string.h>

int main() {
	char atual[30];
	char anterior[30] = "";
	char concat[1000] = "";
	int tMax, tMin, tmp;


    scanf("%s", atual);
	strcat(concat, atual);
	tMax = strlen(atual);
	tMin = tMax;
	
	while (strcmp(atual, anterior)) {
		strcpy(anterior, atual);
		scanf("%s", atual);

		strcat(concat, atual);

		tmp = strlen(atual);
	
		if (tMax < tmp) {
			tMax = tmp;
		} else if (tMin > tmp) {
			tMin = tmp;
		}
	}

	printf("------------------RELATORIO------------------\n");
	printf("Tamanho da maior: %d\n", tMax);
	printf("Tamanho da menor: %d\n", tMin);
	printf("Concatenacao: %s\n", concat);


	return 0;
}