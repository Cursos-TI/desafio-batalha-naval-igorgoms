#include <stdio.h>

// Aluno Igor Gomes

int main(){
    // Declarando as linhas
    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Declarando o tamanho do tabuleiro que vai ser 10x10
    int tabuleiro[10][10] = {0};

    //Declarando os navios na horizontal
    int linha_h = 4;
    int coluna_h = 5;

    //Preenchendo nas posições horizontais
    for(int i = 0; i < 3; i++){
        tabuleiro[linha_h][coluna_h + i] = 3;
    }

    //Declarando os navios na vertical
    int linha_v = 2;
    int coluna_v = 3;

    //Preenchendo nas posições vertivais
    for(int i = 0; i < 3; i++){
        tabuleiro[linha_v + i][coluna_v] = 3;
    }

    

    //imprimindo o titulo
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