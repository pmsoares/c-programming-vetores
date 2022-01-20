#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que declare um vetor com n=10 números reais
	e coloque na i-ésima posição o resultado de i*(n-1)
*/

#define N 10

int prog0606() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float v[N];
	int i;

	for (i = 0; i < N; i++)
		v[i] = (float)i * (N - 1);

	for (i = 0; i < N; i++)
		printf("%f\n", v[i]);

	return 0;
}