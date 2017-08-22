	/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * respostaExercício5.c - Resposta ao quinto exercício da segunda aula.
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
