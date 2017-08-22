/*
 * Universidade Federal de Pernambuco - UFPE
 * Centro de Inform�tica - CIn
 * Centro Integrado de Tecnologia da Informa��o - CITi
 * Curso de C/C++
 * Instrutor: Allan Lima - http://allanlima.wordpress.com
 *
 * exemploParametrosFuncoes.c - Simples exemplo de como realizar a passagem por
 *                              valor e por refer�ncia em fun��es.
 *
 */

#include <stdio.h> 

// Passagem por valor
void funcao1(int a) {
     printf("Dentro da funcao1, a = %d\n", a);
     a = 2;
     printf("Dentro da funcao1, a = %d\n", a);
}

// Passagem por refer�ncia
void funcao2(int *a) {
	printf("Dentro da funcao2, a = %d\n", *a);
	*a = 2;
	printf("Dentro da funcao2, a = %d\n", *a);
}

int main() {
	int numero = 9;

	printf("Antes da chamada da funcao1, numero = %d\n", numero);
	// a vari�vel numero n�o � alterada
	funcao1(numero);
	printf("Depois da chamada da funcao1, numero = %d\n", numero);
	
	// a vari�vel numero � alterada
	funcao2(&numero);
	printf("Depois da chamada da funcao2, numero = %d\n", numero);

	getchar();

	return 0;
}
