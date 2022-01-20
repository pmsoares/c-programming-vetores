#include <stdio.h>
#include <locale.h>

/*
	Implemente a função
		char * memset(char v[], char ch, int n)
	que coloca nas n primeiras posições do vetor v o carácter ch, devolvendo o próprio vetor v.
*/

char* memset(char v[], char ch, int n) {
	int i;
	for (i = 0; i < n; i++)
		v[i] = ch;
	return v;
}


int prog0607() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char teste[5] = { 'A','B','C','D','E' };
	int i;

	for (i = 0; i < 5; i++)
		printf("%c ", teste[i]);
	putchar('\n');

	memset(teste, 'P', 3);

	for (i = 0; i < 5; i++)
		printf("%c ", teste[i]);
	putchar('\n');

	return 0;
}