/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * exemploGestsPuts.c - Mostra como utilizar vertores em C.
 */

#include <stdio.h>

int main() {
    char string[20];

    printf("Digite uma string: ");
    gets(string);
    printf("Voce digitou: ");
    puts(string);

    // forma portável de subtituir o system("pause");
    getchar();
    return 0;
}
