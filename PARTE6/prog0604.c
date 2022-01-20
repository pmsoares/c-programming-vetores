#include <stdio.h>
#include <locale.h>

int prog0604() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int galo[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	char exemplo[2][4] = { {'A','A','A','A'},{'A','A','A','A'} };

	int i, j;

	//galo[0][1] = 1;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++)
			printf("%c\t", exemplo[i][j]);
		putchar('\n');
	}

	return 0;
}