#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int escolhajogador, escolhacomputador;

void jokenpo() {
    printf("*** Jogo do Jokenpô ***\n");
    printf("Escolha uma opção!\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    do {
        printf("Sua escolha: ");
        scanf("%d", &escolhajogador);
        if (escolhajogador < 1 || escolhajogador > 3) {
            printf("Opção inválida! Por favor, escolha 1, 2 ou 3.\n");
        }
    } while (escolhajogador < 1 || escolhajogador > 3);
    escolhacomputador = (rand() % 3) + 1;
}

void escJogador() {
    switch (escolhajogador) {
        case 1: printf("Jogador: Pedra - "); break;
        case 2: printf("Jogador: Papel - "); break;
        case 3: printf("Jogador: Tesoura - "); break;
    }
}

void escComputador() {
    switch (escolhacomputador) {
        case 1: printf("Computador: Pedra\n"); break;
        case 2: printf("Computador: Papel\n"); break;
        case 3: printf("Computador: Tesoura\n"); break;
    }
}

void determinarVencedor() {
    if (escolhajogador == escolhacomputador) {
        printf("Empate!\n");
    } else if ((escolhajogador == 1 && escolhacomputador == 3) ||
               (escolhajogador == 2 && escolhacomputador == 1) ||
               (escolhajogador == 3 && escolhacomputador == 2)) {
        printf("Humano venceu!\n");
    } else {
        printf("Computador venceu!\n");
    }
}

int main() {
    srand(time(0));
    jokenpo();
    escJogador();
    escComputador();
    determinarVencedor();
    return 0;
}