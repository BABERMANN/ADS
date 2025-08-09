#include <stdio.h>

int main(){

    float ze,chico;
    int ano;

    chico = 1.50;
    ze = 1.10;

    for(ano=0;ano<=30;ano++){
        printf("Chico tem %1.2f de altura no ano %d ||Ze tem %1.2f de altura no ano %d\n", chico, ano,ze, ano);

        chico += 0.02;
        ze += 0.03;
    }
