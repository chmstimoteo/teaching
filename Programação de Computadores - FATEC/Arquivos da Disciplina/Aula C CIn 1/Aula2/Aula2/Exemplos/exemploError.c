/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Inform�tica - CIn
 * Centro Integrado de Tecnologia da Informa��o - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * exemploError.c - Mostra como utilizar a diretiva de compila��o #error
 */

int main() {

    #ifndef __linux__
        #error Este programa so compila no Linux
    #endif

    return 0;
}
