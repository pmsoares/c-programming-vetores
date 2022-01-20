#include <stdio.h>
#include <locale.h>

void inic1(int s[], int tam) {
	int i;
	for (i = 0; i < tam; i++)
		s[i] = 0;
}

int prog0602() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int v[10];
	int x[20];

	inic1(v, 10);
	inic1(x, 20);

	return 0;
}