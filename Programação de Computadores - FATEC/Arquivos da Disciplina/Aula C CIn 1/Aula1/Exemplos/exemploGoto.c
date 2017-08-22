/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * exemploGoto.c - Mostra utilizar o comando goto para criar um loop
 */

#include <stdio.h>

int main() {
	int a = 0, b = 0, i = 0;

	inicio:
		a = a + 10;
		b = b + 15;
		i = i + 1;

		if (i < 10) {
			goto inicio;
		}


	printf("%d %d\n", a, b);

	return 0;
}
