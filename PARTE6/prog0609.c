#include <stdio.h>
#include <locale.h>


/*
	Pergunta 1
		Implemente a função:
			float max(float v[], int n)
		que recebe um vetor de reais e o número de elementos a considerar.
		Devolve o maior número entre os n primeiros elementos do vetor.
*/

float max(float v[], int n) {
	int i;
	float maior = v[0];
	for (i = 1; i < n; i++)
		if (v[i] > maior)
			maior = v[i];
	return maior;
}

int prog0609() { //programa de teste
	setlocale(LC_ALL, "Portuguese_Portugal");

	float x[] = { 10.0, 20.0, 15.0, 50.0, 27.0 };

	printf("O maior dos 3 primeiros elementos = %f\n", max(x, 3));
	printf("O maior dos 5 primeiros elementos = %f\n", max(x, 5));

	return 0;
}
