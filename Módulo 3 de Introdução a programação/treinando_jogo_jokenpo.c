#include <stdio.h>//bibilioteca padrao de entrada e saída
#include <stdlib.h>//usada para funções como rand() e srand() (números aleatórios).
#include <time.h>// usada para pegar o tempo atual com time(NULL) e inicializar o gerador de números aleatórios.
#include <locale.h>

//variável universal
int escolha_pessoa, escolha_computador;

//função de entrada do jogo
void inicio_jogo(){
    //gerar número aleatório. Usado no início do programa para garantir que cada execução fere um número diferente
    srand(time(0));

    printf("*** Jokenpô *** \n");
    printf("1. Pedra \n");
    printf("2. Papel \n");
    printf("3. Tesoura \n");
    printf("Faça sua escolha: ");
    scanf("%d", &escolha_pessoa);

}
//função para exibir escolha dos jogadores
void exibe_escolha(){

    escolha_computador = (rand() % 3) + 1;
// exie escolha da pessoa na tela
    switch (escolha_pessoa)
    {
    case 1:
        printf("Pessoa escolheu Pedra - ");
        break;   
    case 2:
        printf("Pessoa escolheu Papel - ");
        break;
    case 3:
        printf("Pessoa escolheu Tesoura - ");
        break;
                
    default:
        printf("Ecolha inválida, selecione 1, 2 ou 3!\n");
        break;
    }

// exibe escolha do computador na tela
    switch (escolha_computador)
    {
    case 1:
        printf("Computador escolheu Pedra \n");
        break;   
    case 2:
        printf("Computador escolheu Papel \n");
        break;
    case 3:
        printf("Computador escolheu Tesoura \n");
        break;
                
    default:
        break;
    }
    
}
// função que decide o vencedor
    void decisao(){

    if  ((escolha_pessoa == 1 && escolha_computador == 2) ||
         (escolha_pessoa == 2 && escolha_computador == 3) ||
         (escolha_pessoa == 3 && escolha_computador == 1)) 
         
        {
            printf("Computador venceu!");
        } else if (escolha_pessoa == escolha_computador){
            printf("Empate!");
        } else {
            printf("Pessoa venceu!");
        }
        

    }
//chammando as funções
int main(){
    
    inicio_jogo();
    exibe_escolha();
    decisao();

    return 0;

}

