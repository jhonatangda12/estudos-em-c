//bibiliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//variável global

//menu
int void menu(){
    int opcao;

    printf("***Menu***\n");
    printf("1. Jogos\n");
    printf("2. Regras dos Jogos\n");
    printf("3. Sair\n");
    printf("Esolha uma opção: ");
    scanf("%d", &opcao);
}

//chama as funções 
int main(){
    menu();
    return 0;
}

