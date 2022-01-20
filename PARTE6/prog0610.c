#include <stdio.h>
#include <locale.h>

/*
	Pergunta 2
		Implemente a função:
			void transpor(int v[MAX][MAX])
		Que transpõe a matriz v com MAX por MAX elementos.
*/

#define MAX 3 //vamos testar com o 3 (matriz de 3x3)

void transpor(int v[MAX][MAX]) {
	int i, j, tmp;
	for (i = 0; i < MAX; i++)
		for (j = i + 1; j < MAX; j++) {
			tmp = v[i][j];
			v[i][j] = v[j][i];
			v[j][i] = tmp;
		}
}

void imprime(int v[][MAX]) {
	int i, j;
	for (i = 0; i < MAX; i++) {
		for (j = 0; j < MAX; j++)
			printf("%d ", v[i][j]);
		putchar('\n');
	}
}

int main() { //programa de teste
	setlocale(LC_ALL, "Portuguese_Portugal");

	int x[][MAX] = { {1,2,3},{4,5,6},{7,8,9} };

	puts("MATRIZ INICIAL:");
	imprime(x);
	transpor(x);
	puts("\nDEPOIS DA TRANSPOSIÇÃO:");
	imprime(x);

	return 0;
}
