//bibiliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//vari�vel global
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
        printf("Esolha uma op��o: ");
        scanf("%d", &opaoMenu);
        while (opaoMenu < 1 || opaoMenu > 3){
            printf("Op��o inv�lida. Esolha um n�mero de 1 a 3!\n\n");
            menu();
        }
}   
//Fun��o para escolha das regras
void menuRegras(){
    switch (opaoMenu)
    {
        case 2:
            printf("***Menu Regras***\n\n");
            printf("1. Jokenp�\n");
            printf("2. Acerte o n�mero\n");
            printf("3. Voltar ao menu\n");
            printf("Esolha uma op��o: ");
            scanf("%d", &opcaoMenu);
            while (opcaoMenu < 1 || opcaoMenu > 3){
                printf("Op��o inv�lida. Esolha um n�mero de 1 a 3!\n\n");
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
//Fun��o para escolha do jogo
void menuJogos(){
    switch (opaoMenu)
    {           
    case 1:
        printf("***Jogos***\n\n");
        printf("1. Jokenp�\n");
        printf("2. N�mero certo\n");
        printf("Escolha seu jogo: ");
        scanf("%d", &opcaoJokenpo);
//Caso o usu�rio escolha um n�mero inv�lido        
            while (opcaoJokenpo > 2 && opcaoJokenpo > 1){
            printf("Op��o inv�lida! Escolha um n�mero de 1 a 2.\n\n");
            menuJogos();            
        }
        break;
    }  
}
// Fun��o para jogo Jokenp�
void jokenpo(){
    switch (opcaoJokenpo)
    {
    case 1:
        printf("***Jogo Jokenp�***\n\n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n");
        printf("Escolha seu objeto: ");
        scanf("%d", &jogador);
        computador = rand() % 3 + 1;
        while ((jogador > 3 && jogador > 1) || (computador > 3 && computador < 1)){
            printf("Op��o inv�lida. Escolha um n�mero de 1 a 3!\n");
            jokenpo();
        break;
        }        

        switch (jogador)
    {
    case 1:
        printf("Jogador � pedra - ");
        break;
    case 2:
        printf("Jogador � papel - ");
        break;
    case 3:
        printf("Jogador � tesoura - ");
        break;    
    default:
        break;
    }
    switch (computador)
    {
    case 1:
        printf("Computador � pedra.\n");
        break;
    case 2:
        printf("Computador � papel.\n");
        break;
    case 3:
        printf("Computador � tesoura.\n");
        break;    
    default:
        break;
    }
    
    default:    
        break;
    
    }
}
//Condi��o do jogo
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


//chama as fun��es 
int main(){
    srand(time(NULL));
    menu();
    menuJogos();
    menuRegras();
    jokenpo();
    condicao();
    

    return 0;
}

