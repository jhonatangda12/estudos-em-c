@ -0,0 +1,28 @@
#include <stdio.h>

int numero;


// Função para capturar a idade, nome, renda e dependentes
void Idade_Nome_Renda_Dependentes() {
    printf("Digite seu número: \n");
    scanf("%d", &numero);

}

// Função para capturar a condição
void Condicao() {
    if (numero > 0){
        printf("Número positivo");
    } else if (numero == 0) {
        printf("Número nulo");
    } else {
        printf("Número negativo");
    }
}

int main() {
    Idade_Nome_Renda_Dependentes();
    Condicao();
    return 0;
}