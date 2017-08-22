/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * exemploMatrizes.c - Mostra como utilizar vertores em C.
 */

#include <stdio.h>

int main() {
    // Matriz Bidimensional
    int m1[2][2] = { 1, 2, 3, 4 };
    // Outra maneira
    int m2[2][2] = { {1, 2 }, { 3, 4 } };
    // Matriz Tridimensional
    int m3[2][2][2] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    printf("%d\n", m1[1][1]);
    printf("%d\n", m3[1][0][0]);

    return 0;
}
