/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Inform�tica - CIn
 * Centro Integrado de Tecnologia da Informa��o - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * exemploStrcmp.c - Mostra como utilizar a fun��o strcmp.
 */

#include <stdio.h>
#include <string.h>

int main() {
    char pergunta[] = "Qual � a sua linguagem favorita? ";
    char resposta[15];

    do {
        printf("%s", pergunta);
        scanf("%s", resposta);
    } while (strcmp(resposta, "C/C++"));
    
    return 0;
}
