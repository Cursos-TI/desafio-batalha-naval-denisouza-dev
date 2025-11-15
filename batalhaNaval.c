#include <stdio.h>

int main() {

    // Matriz 5x5 representando o tabuleiro.
    // 0 = água, 3 = parte do navio
    int tabuleiro[5][5];

    // Inicializando o tabuleiro com água (0)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navios terão tamanho 3
    int tamanhoNavio = 3;

    // Coordenadas definidas no código:
    int linhaH = 1, colunaH = 0; // Navio horizontal começa em (1,0)
    int linhaV = 0, colunaV = 3; // Navio vertical começa em (0,3)

    // Posicionando o navio horizontal (3 partes)
    printf("Navio Horizontal:\n");
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaH][colunaH + i] = 3;
        printf("  Parte %d -> Coordenada: (%d, %d)\n", i + 1, linhaH, colunaH + i);
    }

    // Posicionando o navio vertical (3 partes)
    printf("\nNavio Vertical:\n");
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
        printf("  Parte %d -> Coordenada: (%d, %d)\n", i + 1, linhaV + i, colunaV);
    }

    // Exibindo o tabuleiro completo
    printf("\nTabuleiro 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
