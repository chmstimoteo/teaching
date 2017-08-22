/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * respostaDesafio2.c - Resposta ao segundo desafio da primeira aula.
 */
 
#include <stdio.h>

int binarySearch(int array[], int startIndex, int endIndex, int value) {
	int currentIndex = (startIndex + endIndex) / 2;

	if (startIndex == endIndex && array[currentIndex] != value) {
		return -1;
	}

	if (array[currentIndex] < value) {
		binarySearch(array, currentIndex + 1, endIndex, value);
	} else if (array[currentIndex] > value) {
		binarySearch(array, startIndex, currentIndex - 1, value);
	} else {
		return currentIndex;
	}

}

int main() {
	int array[] = {4, 9, 12 , 20, 32, 80};
	int i;

	for (i = 0; i < 6; i++) {
		printf("%d\n", binarySearch(array, 0, 5, array[i]));
	}

	printf("%d\n", binarySearch(array, 0, 5, 50));

	getchar();

	return 0;
}