#include <stdio.h>
#include <locale.h>

//constantes simbólicas
#define MAX 5

void inic2(int s[], int tam) {
	int i;
	for (i = 0; i < tam; i++)
		s[i] = 0;
}

int prog0603() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int v[MAX], i;
	inic2(v, MAX);

	for (i = 0; i < MAX; i++)
		v[i] = i;

	for (i = 0; i < MAX; i++)
		printf("%d\n", v[i]);

	return 0;
}