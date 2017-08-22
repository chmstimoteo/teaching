/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * respostaExerccio4.c - Resposta ao quarto exercício da primeira aula.
 */

#include <stdio.h>


int main() {
	int a;

	scanf("%d", &a);

	if (a%3) {
		printf("%d eh nao multiplo de 3\n", a);
	} else {
		printf("%d eh multiplo de 3\n", a);
	}

	return 0;
}
