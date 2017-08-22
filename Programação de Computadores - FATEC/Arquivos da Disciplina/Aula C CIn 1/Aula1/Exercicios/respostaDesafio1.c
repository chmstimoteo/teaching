/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * respostaDesafio1.c - Resposta ao primeiro desafio da primeira aula.
 */

#include <stdio.h>

void showBits(int a) {
	int i, b;

	for (i = ((sizeof(int) * 8) - 1); i > -1; i--) {
		printf("%d", (a >> i) & 1);
	}

	printf("\n");
}


int main() {
	int a;

	showBits(5);
	showBits(20);
	showBits(-6);	

    system("pause");
	return 0;
}


