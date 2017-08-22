/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Informática - CIn
 * Centro Integrado de Tecnologia da Informação - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com
 *
 * exemploParametrosFuncoes.c - Simples exemplo de como realizar a passagem por
 *                              valor e por referência em funções.
 *
 */

#include <stdio.h> 

// Passagem por valor
void funcao1(int a) {
     printf("Dentro da funcao1, a = %d\n", a);
     a = 2;
     printf("Dentro da funcao1, a = %d\n", a);
}

// Passagem por referência
void funcao2(int *a) {
	printf("Dentro da funcao2, a = %d\n", *a);
	*a = 2;
	printf("Dentro da funcao2, a = %d\n", *a);
}

int main() {
	int numero = 9;

	printf("Antes da chamada da funcao1, numero = %d\n", numero);
	// a variável numero não é alterada
	funcao1(numero);
	printf("Depois da chamada da funcao1, numero = %d\n", numero);
	
	// a variável numero é alterada
	funcao2(&numero);
	printf("Depois da chamada da funcao2, numero = %d\n", numero);

	getchar();

	return 0;
}
