#include <stdio.h>
#include <locale.h>

#define TAM 3
#define ESPACO ' '

void inic3(char s[][TAM]) {
	int i, j;
	for (i = 0; i < TAM; i++)
		for (j = 0; j < TAM; j++)
			s[i][j] = ESPACO;
}

void mostra(char s[][TAM]) {
	int i, j;
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++)
			printf(" %c %c", s[i][j], j == TAM - 1 ? ' ' : '|');

		if (i != TAM - 1)
			printf("\n----------\n");
	}
}

int prog0605() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int posx, posy;
	char ch = 'O'; //carácter a jogar
	int n_jogadas = 0;
	char galo[TAM][TAM];

	inic3(galo);

	while (1) {
		mostra(galo);
		printf("\nIntroduza a posição do jogo (linha coluna): ");
		scanf_s("%d %d", &posx, &posy);
		posx--;
		posy--;
		if (galo[posx][posy] == ESPACO) {
			galo[posx][posy] = ch = (ch == 'O' ? 'X' : 'O');
			n_jogadas++;
		}
		else
			printf("Posição já ocupada ou inválida!\nJogue novamente!!!\n");

		if (n_jogadas == TAM * TAM)
			break;
	}
	
	mostra(galo);
	putchar('\n');
	return 0;
}