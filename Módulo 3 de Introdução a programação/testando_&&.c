@ -0,0 +1,44 @@
#include <stdio.h>

int idade;
char nome[30];
float renda;
int dependentes;

// Função para capturar a idade, nome, renda e dependentes
void Idade_Nome_Renda_Dependentes() {
    printf("Digite seu nome: \n");
    scanf("%29s", nome); // Limita a entrada para evitar overflow

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua renda mensal: \n");
    scanf("%f", &renda);

    printf("Digite a quantidade de dependentes: \n");
    scanf("%d", &dependentes);
}

// Função para capturar a condição
void Condicao() {
    if (idade >= 18 && idade <= 65) {
        if (renda <= 4000) {
            if (dependentes <= 2) {
                printf("%s, você está apto a receber o benefício! \n", nome);
            } else {
                printf("%s, você não atende ao critério dependentes! \n", nome);
            }
        } else {
            printf("%s, você não atende ao critério renda! \n", nome);
        }
    } else {
        printf("%s, você não atende ao critério idade! \n", nome);
    }
}

int main() {
    Idade_Nome_Renda_Dependentes();
    Condicao();
    return 0;
}