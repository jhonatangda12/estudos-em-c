//operadores logicos.c
//&& (AND) - || (OR) - ! (NOT)
#include <stdio.h>
int a = 1, b = 0, c = 15;

//operador AND (&&) - verifica se todas as condições são verdadeiras
void operadoresLogicos(){
    if(a > 0 && b > 0){
        printf("O valor de a e b são positivos!\n");
    }
    else{
        printf("Um dos valores é negativo!\n");
    }
}

//operador OR (||) - verifica se ao menos uma condição é verdadeira. Se ambas for falsa, retorna falso
void operadoresLogicos2(){
    if(a > 0 || b > 0){
        printf("Existe valores!\n");
    }
    else{
        printf("Não existe valores!\n");
    }
}

//operador NOT (!) - inverte o valor lógico de uma expressão
void operadoresLogicos3(){
    if(!a){
        printf("Existe valores!\n");
    }
    else{
        printf("Não existe valores!\n");
    }
}


int main(){
    operadoresLogicos();
    operadoresLogicos2();
    operadoresLogicos3();
    return 0;
}