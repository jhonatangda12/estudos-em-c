#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
int jogo;
int numeroSecreto;
int palpite;
void Menu(){
  printf("Menu principal\n");
  printf("1. Iniciar jogo\n");
  printf("2. Ver regras\n");
  printf("3. Sair\n");
  printf("Escolha sua opção: ");
  scanf("%d", &jogo);
}
void Condicao(){
  switch (jogo)
  {
  case 1 :
    srand(time(0)); // inicializar gerador de números aleatórios
    numeroSecreto = rand() % 10;
    printf("Escolha um número (0 a 9): ");
    scanf("%d", &palpite);
    if (numeroSecreto == palpite) {
    printf("Você acertou!\n");
    printf("Número gerado: %d\n", numeroSecreto);
    }
    else if (palpite > 9)
    {
      printf("Número inválido!");
    }
    else {
    printf("Você errou!\n");
    printf("Número gerado: %d\n", numeroSecreto);
    }
    break;
  case 2 :
    printf("Escolha um número de 0 a 9.\n O objetivo do jogo é certar o número que o programa gerou.");
    break;
  case 3 :
    printf("Saindo do jogo!");
    break;        
  
  default:
    printf("Opção inválida!");  
    break;
  }
}
int main(){
  Menu();
  Condicao();
  return 0;
}