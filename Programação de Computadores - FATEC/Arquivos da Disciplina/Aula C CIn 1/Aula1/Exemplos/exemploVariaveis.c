/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * exemploStatic.c - Mostra como utilizar variáveis na linguagens c.
 */

int a = 15, b = 10; // Variáveis globais

void f(char c) {
    double d = 10.0; // Variável local
    int i = a; // Variável local

    //...
}
int main() {
    // todas as funções do arquivo conseguem acessar b
    int i = b;
    return 0;
}
