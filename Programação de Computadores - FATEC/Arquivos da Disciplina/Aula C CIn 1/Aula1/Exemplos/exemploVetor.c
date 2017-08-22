/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * exemploVetor.c - Mostra como utilizar vertores em C.
 */

#include <stdio.h>

int main() {
    int numeros[10] = {1, 1};
    int i;

    for (i = 2; i < 10; i++) {
        numeros[i] = numeros[i-1] + numeros[i-2];
    }

    for (i = 0; i < 10; i++) {
        printf("%d\n", numeros[i]);
    }
    
    return 0;
}
