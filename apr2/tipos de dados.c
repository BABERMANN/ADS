//Escreva um programa que leia dia, mês e ano de nascimento uma pessoa.
//Imprima a frase “Você nasceu em xx/xx/xxxx.”


#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("Escreva o dia do seu aniversario\n");
    scanf("%d", &dia);
    if(dia < 1 || dia > 31 ){
        printf("dia incorreto\n");
        return 0;
    }

    printf("Escreva o mes do seu nascimento\n");
    scanf("%d", &mes);
       if(mes < 1 || mes > 12 ){
        printf("mes incorreto\n");
        return 0;
    }

    printf("Digite o ano do nascimento\n");
    scanf("%d", &ano);
    if(ano > 2025){
        printf("viagem no tempo ainda nao foi descoberta\n");
        return 0;
    }
    
    printf("voce nasceu no dia: %02d/%02d/%04d",dia, mes ,ano);
    
}

