#include <stdio.h>

/*
 ============================================================================
 Jogo: Xadrez - Desafio Nível Mestre
 Autor: Jonh Kellyson
 Data: 12/09/2025
 Descrição: Versão final do simulador de movimentos de xadrez.
            - Torre, Bispo e Rainha usam FUNÇÕES RECURSIVAS.
            - Cavalo usa LOOPS ANINHADOS COMPLEXOS com break.
            - Bispo combina recursão com loops aninhados para
              demonstrar a técnica solicitada.
 ============================================================================
*/

// --- Protótipos das Funções Recursivas ---
// É uma boa prática declarar as funções antes de usá-las em main().
void moverTorre_recursivo(int casas_restantes);
void moverBispo_recursivo_com_loops(int casas_restantes);
void moverRainha_recursivo(int casas_restantes);


int main() {
    // --- 1. Movimento da Torre com Recursividade ---
    printf("--- Movimento da Torre (com Recursao) ---\n");
    // Chamamos a função recursiva para mover a torre 5 casas.
    moverTorre_recursivo(5);

    // --- 2. Movimento do Bispo com Recursividade e Loops Aninhados ---
    printf("\n--- Movimento do Bispo (com Recursao e Loops Aninhados) ---\n");
    // Chamamos a função que combina as duas técnicas para 5 casas.
    moverBispo_recursivo_com_loops(5);

    // --- 3. Movimento da Rainha com Recursividade ---
    printf("\n--- Movimento da Rainha (com Recursao) ---\n");
    // Chamamos a função recursiva para mover a rainha 8 casas.
    moverRainha_recursivo(8);

    // --- 4. Movimento do Cavalo com Loops Complexos ---
    printf("\n--- Movimento do Cavalo (com Loops Complexos) ---\n");
    // O movimento é 2 casas para cima e 1 para a direita.
    int movimentos_verticais = 2;
    int movimentos_horizontais = 1;

    // O loop externo controla a "fase" do movimento: 1 para vertical, 2 para horizontal.
    for (int fase = 1; fase <= 2; fase++) {
        // O loop interno controla os passos dentro de cada fase.
        // Ele pode dar até 'movimentos_verticais' passos.
        for (int passo = 1; passo <= movimentos_verticais; passo++) {
            
            // Se estamos na fase 1 (vertical), movemos para cima.
            if (fase == 1) {
                printf("Cima\n");
            }
            
            // Se estamos na fase 2 (horizontal)...
            if (fase == 2) {
                printf("Direita\n");
                // ...só precisamos dar um passo. O 'break' interrompe o
                // loop interno ('passo') imediatamente após o primeiro passo.
                break;
            }
        }
    }

    return 0;
}


/**
 * @brief Move a Torre recursivamente para a direita.
 * @param casas_restantes O número de casas que ainda faltam para mover.
 */
void moverTorre_recursivo(int casas_restantes) {
    // Caso Base: Se não há mais casas para mover, a função para.
    // Isso é essencial para evitar um loop infinito (stack overflow).
    if (casas_restantes <= 0) {
        return;
    }

    // Passo da Recursão:
    // 1. Imprime um movimento.
    printf("Direita\n");
    // 2. Chama a si mesma, mas com o problema reduzido (uma casa a menos).
    moverTorre_recursivo(casas_restantes - 1);
}

/**
 * @brief Move o Bispo recursivamente na diagonal.
 * A recursão controla o NÚMERO de passos, enquanto os loops aninhados
 * (de forma simbólica) representam a composição do movimento em um passo.
 * @param casas_restantes O número de passos diagonais restantes.
 */
void moverBispo_recursivo_com_loops(int casas_restantes) {
    // Caso Base:
    if (casas_restantes <= 0) {
        return;
    }
    
    // Passo da Recursão:
    // A lógica de um passo diagonal ("Cima" + "Direita") é representada
    // por loops aninhados, conforme solicitado no desafio.
    // O loop externo representa o movimento vertical (1 passo).
    for (int v = 0; v < 1; v++) {
        // O loop interno representa o movimento horizontal (1 passo).
        for (int h = 0; h < 1; h++) {
            printf("Cima, Direita\n");
        }
    }

    // Chama a si mesma para o próximo passo diagonal.
    moverBispo_recursivo_com_loops(casas_restantes - 1);
}

/**
 * @brief Move a Rainha recursivamente para a esquerda.
 * @param casas_restantes O número de casas que ainda faltam para mover.
 */
void moverRainha_recursivo(int casas_restantes) {
    // Caso Base:
    if (casas_restantes <= 0) {
        return;
    }
    
    // Passo da Recursão:
    printf("Esquerda\n");
    moverRainha_recursivo(casas_restantes - 1);
}