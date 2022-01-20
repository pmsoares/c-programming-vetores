#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que realize a leitura dos sal�rios pagos a um indiv�dulo durante um ano.
	Em seguida, dever� mostrar os valores mensais e o total anual.
*/

int prog0601() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float sal[12]; //12 meses do ano
	float total;
	int i;

	//Pedir os sal�rios ao utilizador
	for (i = 0; i < 12; i++) {
		printf("Introduza o sal�rio do m�s %d: ", i + 1);
		scanf_s("%f", &sal[i]);
	}

	//Mostrar os sal�rios e somar o total
	puts("\n M�s\tValor");
	for (i = 0, total = 0.0F; i < 12; i++) {
		printf(" %3d\t%9.2f\n", i + 1, sal[i]);
		total += sal[i];
	}

	printf("\nTotal Anual: %9.2f\n", total);

	return 0;
}