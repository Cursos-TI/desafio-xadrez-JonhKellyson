#include <stdio.h>

int main() {
    // 1. Torre: Movimento de 5 casas para a direita usando 'for'.
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // 2. Bispo: Movimento de 5 casas na diagonal usando 'while'.
    printf("\n--- Movimento do Bispo ---\n");
    int passos_bispo = 0;
    while (passos_bispo < 5) {
        printf("Cima, Direita\n");
        passos_bispo++;
    }

    // 3. Rainha: Movimento de 8 casas para a esquerda usando 'do-while'.
    printf("\n--- Movimento da Rainha ---\n");
    int passos_rainha = 0;
    do {
        printf("Esquerda\n");
        passos_rainha++;
    } while (passos_rainha < 8);

    return 0;
}