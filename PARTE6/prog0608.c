#include <stdio.h>
#include <locale.h>
#include <stdlib.h> //para a função rand() e srand()
#include <time.h> //para a função time

/*
	Escreva um programa que permita gerar uma jogada para o totoloto,
	indicando os nºs a apostar, os quais deverão ser criados aleatoriamente.
*/

#define NUMS 49
#define MIN_APOSTA 6
#define NUM_LIN 7

//protótipos das funções
void inic_Random();
void inic(int v[NUMS]);
int ler_n_apostar();
void gerar(int* v, int n);
void apresentar(int* res);

void inic_Random() {
	time_t ultime;
	time(&ultime);
	srand((unsigned)ultime);
}

void inic(int v[NUMS]) {
	int i;
	for (i = 0; i < NUMS; i++)
		v[i] = 0;
}

int ler_n_apostar() {
	int n;
	do
	{
		printf("Quantos números quer apostar? (0 - Terminar) ");
		scanf_s("%d", &n);
	} while ((n < MIN_APOSTA || n > NUMS) && n != 0);

	return n;
}

void gerar(int* v, int n) {
	int i, indice;
	for (i = 0; i < n; i++) {
		indice = rand() % NUMS;

		if (v[indice] == 0)
			v[indice] = 1;
		else
			i--;
	}
}

void apresentar(int* res) {
	int i;
	for (i = 0; i < NUMS; i++) {
		if (res[i] == 0)
			printf(" %2d", i + 1);
		else
			printf(" \033[0;92mXX\033[0m");
		if ((i + 1) % NUM_LIN == 0)
			putchar('\n');
	}
	putchar('\n');
}

int prog0608() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int vetor[NUMS];
	int n_nums;

	inic_Random();

	while (1) {
		inic(vetor);
		if ((n_nums = ler_n_apostar()) == 0)
			break;

		gerar(vetor, n_nums);
		apresentar(vetor);
	}

	return 0;
}
