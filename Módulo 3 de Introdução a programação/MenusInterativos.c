#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
int opcao;
void Menu(){
  printf("Menu principal\n");
  printf("1. Iniciar jogo\n");
  printf("2. Ver regras\n");
  printf("3. Sair\n");
  printf("Escolha sua opção: ");
  scanf("%d", &opcao);
}
void Condicao(){
  switch (opcao)
  {
  case 1 :
    printf("Execução do jogo!\n");
    break;
  case 2 :
    printf("Regras...");
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