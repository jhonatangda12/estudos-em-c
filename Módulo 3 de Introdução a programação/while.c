//bibiliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//variável global
int opcaoJokenpo;
int opaoMenu;
int opcaoMenu;
int jogoJokenpo;
int jogador;
int computador;

//menu
void menu(){
    setlocale(LC_ALL, "Portuguese_Brazil"); 
    fflush(stdout);        
    
        printf("***Menu***\n\n");
        printf("1. Jogos\n");
        printf("2. Regras dos Jogos\n");
        printf("3. Sair\n");
        printf("Esolha uma opção: ");
        scanf("%d", &opaoMenu);
        while (opaoMenu < 1 || opaoMenu > 3){
            printf("Opção inválida. Esolha um número de 1 a 3!\n\n");
            menu();
        }
}   
//Função para escolha das regras
void menuRegras(){
    switch (opaoMenu)
    {
        case 2:
            printf("***Menu Regras***\n\n");
            printf("1. Jokenpô\n");
            printf("2. Acerte o número\n");
            printf("3. Voltar ao menu\n");
            printf("Esolha uma opção: ");
            scanf("%d", &opcaoMenu);
            while (opcaoMenu < 1 || opcaoMenu > 3){
                printf("Opção inválida. Esolha um número de 1 a 3!\n\n");
                menuRegras();}

            switch (opcaoMenu)
            {
                case 1:
                    printf("?????");
                    menuRegras();
                    break;
                
                case 2:
                    printf("?????");
                    menuRegras();
                    break;
                case 3:
                    menuJogos();
                    break;        

            }    
      
    }
}
//Função para escolha do jogo
void menuJogos(){
    switch (opaoMenu)
    {           
    case 1:
        printf("***Jogos***\n\n");
        printf("1. Jokenpô\n");
        printf("2. Número certo\n");
        printf("Escolha seu jogo: ");
        scanf("%d", &opcaoJokenpo);
//Caso o usuário escolha um número inválido        
            while (opcaoJokenpo > 2 && opcaoJokenpo > 1){
            printf("Opção inválida! Escolha um número de 1 a 2.\n\n");
            menuJogos();            
        }
        break;
    }  
}
// Função para jogo Jokenpô
void jokenpo(){
    switch (opcaoJokenpo)
    {
    case 1:
        printf("***Jogo Jokenpô***\n\n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n");
        printf("Escolha seu objeto: ");
        scanf("%d", &jogador);
        computador = rand() % 3 + 1;
        while ((jogador > 3 && jogador > 1) || (computador > 3 && computador < 1)){
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
void condicao(){
    if ((jogador == 1 && computador == 3)||
    (jogador == 2 && computador == 1)||
    (jogador == 3 && computador == 2)){
        printf("Jogador ganhou!\n");
    } else if (jogador == computador){
        printf("Empate. Jogue de novo!\n\n");
    jokenpo();
    }else
    {
        printf("Computador veneu!\n");
    }
    
}


//chama as funções 
int main(){
    srand(time(NULL));
    menu();
    menuJogos();
    menuRegras();
    jokenpo();
    condicao();
    

    return 0;
}

