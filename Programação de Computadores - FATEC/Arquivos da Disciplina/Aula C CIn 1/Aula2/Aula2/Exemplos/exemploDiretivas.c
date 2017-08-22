/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * exemploDiretivas.c - Mostra como utilizar diretivas de compilação
 */
#include <stdio.h>

#define TAMANHO 10
#define GCC_COMPILER
#define max(a,b) ((a>b)?(a):(b))

int main() {
    int array[TAMANHO];// diretivas podem ser usadas para declarar arrays

    #ifdef TAMANHO
        printf("%d\n", TAMANHO); // imprime 10
    #endif

    #undef TAMANHO

    #ifndef TAMANHO
        printf("Tamanho nao esta definido.\n");
    #endif

    // _WIN32 é uma diretiva que os compiladores usam para indicar que são
    // do  windows
    #ifdef _WIN32
        printf("O programa foi compilado no Rwindows.\n");
    #endif

    // __linux__ é uma diretiva que os compiladores usam para indicar que são
    // do linux
    #ifdef __linux__
        printf("O programa foi compilado no Linux!!!\n");
    #endif

    // outra maneira de descobrir o SO
    #if defined(_WIN32)
        printf("O programa foi compilado no Rwindows.\n");
    #elif defined(__linux__)
        printf("O programa foi compilado no Linux!!!\n");
    #else
        printf("O programa esta rodando em um SO desconhecido.\n");
    #endif

    printf("%d\n", max(10, 30)); // imprime 30
    printf("%f\n", max(14.0f, 5.0f)); // imprime 14.0

    getchar();

    return 0;
}
