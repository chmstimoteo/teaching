/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - adsl@cin.ufpe.br
 *
 * respostaExercício5.c - Resposta ao terceiro exercício da terceira aula.
 */

#include <stdio.h>
#include <string.h>

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int a = 10, b = 15;

	swap(&a, &b);
	printf("a = %d\nb = %d\n", a, b);

	return 0;
}
