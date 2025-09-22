//Gerador de números aleatório 'ranger e sranger'
// inclusão de bibiliotecas
#include <stdint.h> 
#include <stdlib.h>
#include <time.h>

int opcao = 1; 
int numeroSecreto;
int palpite;

void Menu (){
    printf("Menu principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    if (opcao == 1) {

    }
}

void Condicao (){
    switch (opcao)
    {
    case 1 :
        srand(time(0)); // inicializar gerador de números aleatórios
        numeroSecreto = rand() % 10;
        printf("Escolha um número (0 a 9): ");
        scanf("%d", &palpite);
        if (numeroSecreto == palpite) {
            printf("Você acertou!\n");
        } else {
            printf("Você errou!\n");
        }
        printf("Número gerado: %d\n", numeroSecreto);
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
}

int main(){
    Menu();
    Condicao();
  return 0;
}
