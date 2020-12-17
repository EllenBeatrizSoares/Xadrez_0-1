#include <stdio.h> //Biblioteca
#include <stdlib.h> //Biblioteca
#include <ctype.h> //Biblioteca
#include<locale.h> //Biblioteca
#include <iostream> //Biblioteca
#define z 8

int main() {
	setlocale(LC_ALL, "Portuguese");// Para usar acentos e letras especiais
	
	int matriz[8][8] = { 0 };//tamanho matriz
	int x = 8;
	int y = 8;
	int cont[7] = { 0 };

	printf("___________________________________________________________________________________________________________________________\n");//Para ficar visualmente mais onganizado
	printf("\t\t\t\t\t\t Ol� jogador(a)!!!\n");
	printf("____________________________________________________________________________________________________________________________\n");//Para ficar visualmente mais onganizado
	printf("Preencha o tabuleiro com as seguintes pe�as e seus respectivos n�meros representantes:\n\n");//instru��es...
	printf("1 - Pe�es\n");
	printf("2 - Cavalos\n");
	printf("3 - Torres\n");
	printf("4 - Bispos\n");
	printf("5 - Reis\n");
	printf("6 - Rainhas\n");
	printf("0 - Ausencia de pe�as\n");
	printf("\n________________________________________________________________________________________________________________________\n");//Para ficar visualmente mais onganizado

	//Para selecionar os caracteres que povoam a matriz
	 
	for (int x = 0; x < z; x++) { //estrutura de repeti��o para povoar a matriz
	   for (int y = 0; y < z; y++) {
		   printf("\n");
		  printf(" \t   Digite os n�meros do tabuleiro [%i][%i]: ", x, y);//povoa��o da matriz
		scanf_s("%i", &matriz[x][y]);
	    fflush(stdin); // limpa teclado
		  if (matriz[x][y] < 0 || matriz[x][y] >6) { // condi��o valores invalidos
			printf("\n   N�mero invalido! \n");//aviso
			printf("\t   Digite os n�meros do tabuleiro [%i][%i]:", x, y);
			scanf_s("%i", &matriz[x][y]);
			fflush(stdin);//limpa teclado
		  }
	   }
    }

	// Para ler a matriz povoada anteriormente
		printf("\n______________________________________________________________________________________________________________________\n");//Para ficar visualmente mais onganizado
		printf("\n \t\t\t\t\t\t    SEU TABULEIRO �: \n");
		printf("\n_______________________________________________________________________________________________________________________\n");//Para ficar visualmente mais onganizado
		for (int x = 0; x < z; x++) {
			for (int y = 0; y < z; y++) {
				printf("%i \t",  matriz[x][y]); //apresenta a matriz
				if (y == 7) {//quantidade de colunas para apresentar o tabuleiro/matriz
					printf("\n");
				}
				fflush(stdin);//limpa teclado
			}
		}
		
		for (int x = 0; x < z; x++) {
			for (int y = 0; y < z; y++) {
				if (matriz[x][y] == 1) { //numeros/pe�as
					cont[0]++;
				}
				if (matriz[x][y] == 2) {
					cont[1]++;
				}
				if (matriz[x][y] == 3) {
					cont[2]++;
				}
				if (matriz[x][y] == 4) {
					cont[3]++;
				}
				if (matriz[x][y] == 5) {
					cont[4]++;
				}
				if (matriz[x][y] == 6) {
					cont[5]++;
				}
				if (matriz[x][y] == 0) {
					cont[6]++;
				}
			}
		}
		printf("\n_______________________________________________________________________________________________________________________\n");//Para ficar visualmente mais onganizado
		printf("\t\t\t\t\t Ocorrencia das pe�as \n");
		printf("\n_______________________________________________________________________________________________________________________\n");//Para ficar visualmente mais onganizado
		printf("Foram utilizadas %i pe�es nesse jogo. \n", cont[0]);
		printf("Foram utilizadas %i cavalos nesse jogo. \n", cont[1]);
		printf("Foram utilizadas %i torres nesse jogo. \n", cont[2]);
		printf("Foram utilizadas %i bispos nesse jogo. \n", cont[3]);
		printf("Foram utilizadas %i reis nesse jogo. \n", cont[4]);
		printf("Foram utilizadas %i rainhas nesse jogo. \n", cont[5]);
		printf("Foram utilizadas %i pe�as ausentes nesse jogo. \n", cont[6]);
		fflush(stdin);//limpa teclado

	system ("pause");
	return 0;
}