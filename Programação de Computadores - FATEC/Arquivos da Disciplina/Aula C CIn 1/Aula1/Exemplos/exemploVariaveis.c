/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Inform�tica - CIn
 * Centro Integrado de Tecnologia da Informa��o - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * exemploStatic.c - Mostra como utilizar vari�veis na linguagens c.
 */

int a = 15, b = 10; // Vari�veis globais

void f(char c) {
    double d = 10.0; // Vari�vel local
    int i = a; // Vari�vel local

    //...
}
int main() {
    // todas as fun��es do arquivo conseguem acessar b
    int i = b;
    return 0;
}
