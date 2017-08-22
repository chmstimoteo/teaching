/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * respostaExerccio7.c - Resposta ao sétimo exercício da primeira aula.
 */

#include <stdio.h>

int sum(int array[], int len) {
	int i = 0;
	int result = 0;
	
	for (i = 0; i < len; i++) {
		result = result + array[i];
	}

	return result;
}

int main() {

	int array1[] = { 10, 2, 5, -1, 9};
	int array2[] = { 14, -21, 92, -10};

	printf("%d\n", sum(array1, 5));
	printf("%d\n", sum(array2, 4));
	
	getchar();

	return 0;
}