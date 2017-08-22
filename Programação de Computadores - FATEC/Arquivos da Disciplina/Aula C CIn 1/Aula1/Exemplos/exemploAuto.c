/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Inform�tica - CIn
 * Centro Integrado de Tecnologia da Informa��o - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com/
 *
 * exemploAuto.c - Mostra um exemplo de como utilizar a palavra reservada auto
 * na declara��o de nested functions.
 */

int somarQuadrado(int a, int b) {
    auto int quadrado(int); // prot�tipo da fun��o

    // agora a fun��o auto pode ser chamada antes de ser implementada
    int retorno = quadrado(a) + quadrado(b);

    int quadrado(int z) {
        return z * z;
    }

    return retorno;
}

int main() {
    printf("2^2 + 10^2 = %d\n", somarQuadrado(2,10));
    getchar();
    return 0;
}
