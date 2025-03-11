// Aluno: Igor Gomes
#include <stdio.h>

// Define o tamanho do tabuleiro
#define LINHAS 10
#define COLUNAS 10

int main() {
    // Definição das letras das linhas
    char linhas[LINHAS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    // Inicializa o tabuleiro com zeros
    int tabuleiro[LINHAS][COLUNAS] = {0};
    
    // ==================== Habilidade Cone ====================
    int origem_x = 2, origem_y = 3; // Define a origem do cone
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    
    // Percorre a matriz do cone e aplica no tabuleiro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x = origem_x + i - 2;
            int y = origem_y + j - 2;
            // Verifica se está dentro do tabuleiro e aplica a habilidade
            if (x >= 0 && x < LINHAS && y >= 0 && y < COLUNAS && cone[i][j] == 1) {
                tabuleiro[x][y] = 3;
            }
        }
    }
    
    // ==================== Habilidade Cruz ====================
    origem_x = 7; origem_y = 7; // Define a origem da cruz
    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };
    
    // Percorre a matriz da cruz e aplica no tabuleiro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x = origem_x + i - 2;
            int y = origem_y + j - 2;
            // Verifica se está dentro do tabuleiro e aplica a habilidade
            if (x >= 0 && x < LINHAS && y >= 0 && y < COLUNAS && cruz[i][j] == 1) {
                tabuleiro[x][y] = 3;
            }
        }
    }
    
    // ==================== Habilidade Octaedro ====================
    origem_x = 6; origem_y = 2; // Define a origem do octaedro
    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    
    // Percorre a matriz do octaedro e aplica no tabuleiro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x = origem_x + i - 2;
            int y = origem_y + j - 2;
            // Verifica se está dentro do tabuleiro e aplica a habilidade
            if (x >= 0 && x < LINHAS && y >= 0 && y < COLUNAS && octaedro[i][j] == 1) {
                tabuleiro[x][y] = 3;
            }
        }
    }
    
    // ==================== Impressão do Tabuleiro ====================
    printf("\nTabuleiro Batalha Naval\n  ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", linhas[i]); // Imprime os rótulos das colunas
    }
    printf("\n");
    
    // Imprime o tabuleiro com índices
    for (int i = 0; i < 10; i++) {
        printf("%-2d", i + 1); // Imprime o número da linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime os valores do tabuleiro
        }
        printf("\n");
    }
    
    return 0;
}
