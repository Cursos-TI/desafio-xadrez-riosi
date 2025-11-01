#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    // variáveis peças de xadrez
    int bispo = 0;
    int rainha = 0; 
    
    // Nível Novato - Movimentação das Peças

    // Implementação de Movimentação do Bispo
    printf("\nMovimentação do Bispo\n");
    while (bispo < 5) {
    bispo++;
        printf("Bispo move na direção: Cima, Esquerda\n");
    }
    
    // Implementação de Movimentação da Torre
    printf("\nMovimentação da Torre\n");
    for (int torre = 0; torre < 5; torre++) {
        printf("Torre move na direção: Direita\n"); // Imprime a movimentação da peça.
    }

    // Implementação de Movimentação da Rainha
    printf("\nMovimentação da Rainha\n");
    do {
        rainha++;
        printf("Rainha move na direção: Esquerda\n");
    } while (rainha < 8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimentação do Cavalo\n");
    for (int i = 1; i < 2; i++) { // loop externo
        for (int j = 1; j <= 2; j++) { // loop interno
            printf("Movendo o Cavalo %d casa(s) para cima\n", j); 
        }
        printf("Movendo o Cavalo %d casa(s) para direita.\n", i); 
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
