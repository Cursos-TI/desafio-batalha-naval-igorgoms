// Aluno Igor Gomes
#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    // Letras para as colunas (como no seu código original)
    char linhas[LINHAS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Tabuleiro 10x10 inicializado com 0s
    int tabuleiro[LINHAS][COLUNAS] = {0};

    // Navio horizontal (igual ao seu código)
    int linha_h = 4;
    int coluna_h = 5;
    for(int i = 0; i < 3; i++){
        tabuleiro[linha_h][coluna_h + i] = 3;
    }

    // Navio vertical (igual ao seu código)
    int linha_v = 2;
    int coluna_v = 3;
    for(int i = 0; i < 3; i++){
        tabuleiro[linha_v + i][coluna_v] = 3;
    }

    // Navio diagonal 1 (nova parte)
    int linha_d1 = 1;
    int coluna_d1 = 6;
    for(int i = 0; i < 3; i++){
        tabuleiro[linha_d1 + i][coluna_d1 + i] = 3; // Diagonal para baixo/direita
    }

    // Navio diagonal 2 (nova parte)
    int linha_d2 = 7;
    int coluna_d2 = 2;
    for(int i = 0; i < 3; i++){
        tabuleiro[linha_d2 + i][coluna_d2 - i] = 3; // Diagonal para baixo/esquerda
    }

    // Imprime o tabuleiro (igual ao seu código original)
    printf("\nTabuleiro Batalha Naval\n  ");
    for(int i = 0; i < 10; i++){
        printf("%c ", linhas[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%-2d", i + 1);
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}