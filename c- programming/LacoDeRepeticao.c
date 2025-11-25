//1.Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. 
//Faça um programa que imprima a altura de cada um, ano a ano, durante 30 anos.

#include <stdio.h>

int main(){

    float ze,chico;
    int ano;

    chico = 1.50;
    ze = 1.10;

     printf(" Ano | Altura Chico | Altura Ze \n");
      printf("-----|--------------|-----------\n");
        
    for(ano=0;ano<=30;ano++){
         printf(" %-3d |    %4.2f m   |   %4.2f m \n", ano, chico, ze);
        

        chico += 0.02;
        ze += 0.03;
    }
}













