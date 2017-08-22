/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++

 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * respostaExerccio2.c - Resposta ao primeiro exercício da segunda aula.
 */

#include <stdio.h>

int main() {
	int mat[2][2];

	printf("Entre com o elemento 0,0: ");
	scanf("%d", &mat[0][0]);
	printf("Entre com o elemento 0,1: ");
	scanf("%d", &mat[0][1]);
	printf("Entre com o elemento 1,0: ");
	scanf("%d", &mat[1][0]);
	printf("Entre com o elemento 1, 1: ");
	scanf("%d", &mat[1][1]);

	printf("O determinante e: %d\n", mat[0][0] * mat[1][1] - mat[1][0] * mat[0][1]);

	return 0;
}
