#include <stdio.h>
#include <string.h>
char dia[20];

/*void TemperaturaAtual(){
    printf("Insira o dia do mês:\n");
    scanf("%d", &dia);
}
void CondicaoTempo(){
    switch (dia)
    {
    case 1 :
        printf("Domingo");
        break;
    case 2 : 
        printf("Segunda");
        break;
    case 3 : 
        printf("Terça");
        break;
    case 4 : 
        printf("Quarta");
        break;
    case 5 : 
        printf("Quinta");
        break;
    case 6 : 
        printf("Sexta");
        break;
    case 7 : 
        printf("Sábado");
        break;
        
    default:
        printf("Dia inválido\n");
        break;
    }
}

int main(){
    TemperaturaAtual();
    CondicaoTempo();

    return 0;
}*/

void TemperaturaAtual(){
    printf("Insira o dia da semana!");
    scanf(" %s", &dia);  
}
void DiaDaSemana(){
    if (strcmp(dia, "domingo") == 0){
        printf("1\n");

    } else{
        printf("Dia inválido!");

    }
}   

int main(){
    TemperaturaAtual();
    DiaDaSemana();
    
    return 0;
}