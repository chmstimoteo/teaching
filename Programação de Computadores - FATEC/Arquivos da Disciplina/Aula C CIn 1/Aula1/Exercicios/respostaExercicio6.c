/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Inform�tica - CIn
 * Centro Integrado de Tecnologia da Informa��o - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * respostaExerccio6.c - Resposta ao sexto exerc�cio da primeira aula.
 */

#include <stdio.h>

int min(int a, int b) {
    return (a>b) ? b : a;
}

int max(int a, int b) {
    return (a>b) ? a : b;
}

int main() {
	int a = 0, b = 0, i, s, minimo, maximo ;

    scanf("%d", &a);

    minimo = a;
    maximo = a;
    s = a;
    b = ~a;

	i = 1;

	inicio:
        b = a;
		scanf("%d", &a);

        minimo = min(minimo, a);
        maximo = max(maximo, a);
        s = s + a;

		i++;
		if (i < 10 && a != b+1) {
			goto inicio;
		}
	// fim do loop

    printf("Total: %d \n", i);
    printf("Menor: %d\n", minimo);
    printf("Maior: %d\n", maximo);
    printf("Soma:  %d\n", s);
    printf("Media: %d\n", s / i);

	return 0;
}
