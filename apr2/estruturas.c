// 1. Faça um programa que armazene as seguintes informações de
// uma classe: código do aluno, 2 notas e faltas. Use um vetor de
// estruturas. Ao final, exibir um relatório contendo: código, média
// e conceito.
// Conceitos: F (Reprovado por faltas: quando o aluno tem mais
// de 20 faltas; A (média superior a 8,0); B (média entre 6,0 e
// 8,0); C (média entre 4,0 e 5,9); D (média inferior a 4,0)


#include <stdio.h>

int main(){

       struct boletim
    {
        int codigo;
        int nota1;
        int nota2;
        int faltas;
    };

    int i, media;
    struct boletim boletim_real [5];

    for(i = 0; i < 5; i++){ // entrada de dados
        printf("Codigo do auluno:");
        scanf("%d", &boletim_real[i].codigo);
        printf("nota 1:");
        scanf("%d", &boletim_real[i].nota1);
        printf("nota 2:");
        scanf("%d", &boletim_real[i].nota2);
        printf("Faltas:");
        scanf("%d", &boletim_real[i].faltas);
    }

    for(i = 0; i < 5; i++){
        media = (boletim_real[i].nota1 + boletim_real[i].nota2) / 2;

        if(boletim_real[i].faltas > 2 ){
            printf("%d : F", boletim_real[i].codigo);
        }
        
        if(media > 8){
            printf("%d : A", boletim_real[i].codigo);
        }

        if(media > 6 || media < 8){
            printf("%d : B", boletim_real[i].codigo);
        }

        if(media > 4 || media < 6){
            printf("")
        }
    }


    


}
