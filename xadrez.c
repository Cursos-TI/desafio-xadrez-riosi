#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentarTorre(int casas) {
    if (casas > 0) {
        printf("Cima\n");
        movimentarTorre(casas - 1);
    }
}

void movimentarRainha(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        movimentarRainha(casas - 1);
    }
}

void movimentarBispo(int casas) {
    for (int i = 1, j = 1; i <= casas, j <= casas; i++, j++) {
            printf("Cima, Esquerda\n"); 
        }
}

void movimentarCavalo(int casasH, int casasV) {
    for (int i = 0; i < casasH; i++) { 
        for (int j = 0; j < casasV; j++) { 
            printf("Movendo o Cavalo para cima\n"); 
        }
        printf("Movendo o Cavalo para direita.\n"); 
    }
}

int main() {


    printf("\nMovimentação da Torre\n");
    movimentarTorre(5);
    printf("\nMovimentação da Rainha\n");
    movimentarRainha(8);
    printf("\nMovimentação do Bispo\n");
    movimentarBispo(5);
    printf("\nMovimentação do Cavalo\n");
    movimentarCavalo(1, 2);
    

    

    return 0;
}
