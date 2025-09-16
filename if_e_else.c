#include <stdio.h>
int idade = 18;
int temperatura = 30;
float saldo = 100;
float valor = 75.5;

//verificando se a idade é maior ou igual a 18
void estrutudaDecisao(){
if (idade >= 18){
    printf("Você possui idade para dirigir!\n");
}
else{
    printf("Você não possui idade para dirigir!\n");
}
}

//verificando se a temperadura é maior que 30
void temperaduraAr(){

    if (temperatura > 30){
        printf("Está muito quente!\n");
    }
    else{
        printf("A temperadura está agradável!\n");
    }
}
//verificando se a carteira está com dinheiro
void carteira(){
    if (saldo > 0){
        printf("Você tem saldo na conta!\n");
    }
    else{
        printf("Você não tem saldo na conta!\n");
    }
}

void preco(){

    if (valor > 100)
    {
        printf("O preço é alto!\n");
    }
    else if (valor > 50)
    {
        printf("O preço é médio!\n");
    }
    else
    {
        printf("O preço é baixo!\n");
    }
    

}

int main(){
    estrutudaDecisao();
    temperaduraAr(); 
    carteira();
    preco();       

    return 0;
}