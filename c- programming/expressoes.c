//4. Faça um programa para leia um horário emsegundos e transforme-o para o formatohh:mm:ss

#include <stdio.h>

int main(){

    int sec,min, hora, segundos;

    printf("Digite os segundos: ");
    scanf("%d", &segundos);


    sec = segundos % 60;
    min = segundos / 60;
    hora = min / 60;
    min = min % 60;

    printf("%02d:%02d:%02d possui: %d segundos", hora,min,sec,segundos);

}

//5. Faça um programa que leia os pesos deprovas P1, P2 e P3. Em seguida, leia 3 notas deum aluno e calcule a média ponderada do aluno.
