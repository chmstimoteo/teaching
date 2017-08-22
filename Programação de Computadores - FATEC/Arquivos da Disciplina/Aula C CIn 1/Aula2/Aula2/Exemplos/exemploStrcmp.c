/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * exemploStrcmp.c - Mostra como utilizar a função strcmp.
 */

#include <stdio.h>
#include <string.h>

int main() {
    char pergunta[] = "Qual é a sua linguagem favorita? ";
    char resposta[15];

    do {
        printf("%s", pergunta);
        scanf("%s", resposta);
    } while (strcmp(resposta, "C/C++"));
    
    return 0;
}
