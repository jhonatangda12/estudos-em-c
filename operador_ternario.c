/*#include <stdio.h>

float temperatura;

void captura_da_temperatura(){
    printf("Insira a temperatura:\n");
    scanf("%f", &temperatura);
}
void condicao(){
    temperatura > 30 ? printf("Não está calor!\n") : printf("Está calor!\n");
}

int main(){
    captura_da_temperatura();
    condicao();
    return 0;
}*/

#include <stdio.h>

float temperatura;

void captura_da_temperatura(){
    printf("Insira a temperatura:\n");
    scanf("%f", &temperatura);
}
void condicao(){
    if (temperatura > 30 && temperatura < 35) {
        printf("Está considerávelmente quente!");
    }
    else if (temperatura > 15 && temperatura < 20){
        printf("Está muito ficando frio, prepare o casaco!");
    }
    else if (temperatura < 5){
        printf("Está congelando!");
    }         
    else if (temperatura > 10 && temperatura < 15){
        printf("Está frio!");
    }
    else if (temperatura > 5 && temperatura < 10){
        printf("Está muito frio!");
    }          
    else if (temperatura > 35){
        printf("Está muito quente!");
    }  
    else {
        printf("A temperatura está agradável!");
    }
}

int main(){
    captura_da_temperatura();
    condicao();
    return 0;
}