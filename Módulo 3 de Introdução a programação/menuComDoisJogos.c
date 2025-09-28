//bibiliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//variável global
int opcaoJogo;
int opcao;
int jogoJokenpo;
int jogador;
int computador;

//menu
void menu(){
    setlocale(LC_ALL, "Portuguese_Brazil"); 
    fflush(stdout);        
    
        printf("***Menu***\n");
        printf("1. Jogos\n");
        printf("2. Regras dos Jogos\n");
        printf("3. Sair\n");
        printf("Esolha uma opção: ");
        scanf("%d", &opcao);
        if (opcao < 1 || opcao > 3){
            printf("Opção inválida. Esolha um número de 1 a 3!\n");
            menu();
        }
}   
//Função para escolha do jogo
void condicao(){
    switch (opcao)
    {
    case 1:
        printf("***Jogos***\n");
        printf("1. Jokenpô\n");
        printf("2. Número certo\n");
        printf("Escolha seu jogo: ");
        scanf("%d", &opcaoJogo);
//Caso o usuário escolha um número inválido        
            if (opcaoJogo > 2 && opcaoJogo > 1){
            printf("Opção inválida! Escolha um número de 1 a 2.\n");
            condicao();            
        }
        break;
    }  
}
// Função para jogo Jokenpô
void jokenpo(){
    switch (opcaoJogo)
    {
    case 1:
        printf("***Jogo Jokenpô***\n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n");
        printf("Escolha seu objeto: ");
        scanf("%d", &jogador);
        computador = rand() % 3 + 1;
        if ((jogador > 3 && jogador > 1) || (computador > 3 && computador < 1)){
            printf("Opção inválida. Escolha um número de 1 a 3!\n");
            jokenpo();
        break;
        }
  

        

        switch (jogador)
    {
    case 1:
        printf("Jogador é pedra - ");
        break;
    case 2:
        printf("Jogador é papel - ");
        break;
    case 3:
        printf("Jogador é tesoura - ");
        break;    
    default:
        break;
    }
    switch (computador)
    {
    case 1:
        printf("Computador é pedra.\n");
        break;
    case 2:
        printf("Computador é papel.\n");
        break;
    case 3:
        printf("Computador é tesoura.\n");
        break;    
    default:
        break;
    }
    
    default:    
        break;
    
    }
}
//Condição do jogo
void condiao(){
    if ((jogador == 1 && computador == 3)||
    (jogador == 2 && computador == 1)||
    (jogador == 3 && computador == 2)){
        printf("Jogador ganhou!\n");
    } else if (jogador == computador){
        printf("Empate. Jogue de novo!\n");
    jokenpo();
    condicao();}else
    {
        printf("Computador veneu!\n");
    }
    
}


//chama as funções 
int main(){
    srand(time(NULL));
    menu();
    condicao();
    jokenpo();
    condiao();

    return 0;
}

