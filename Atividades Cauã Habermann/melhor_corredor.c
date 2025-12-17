#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arq;
    char nome[50], nomeMelhorGeral[50];
    float t1, t2, t3, t4;
    float melhorTempoPiloto, melhorTempoGeral;
    int primeiro = 1;

    arq = fopen("corredores.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    while (fscanf(arq, "%s %f %f %f %f", nome, &t1, &t2, &t3, &t4) == 5) {
        melhorTempoPiloto = t1;
        if (t2 < melhorTempoPiloto) melhorTempoPiloto = t2;
        if (t3 < melhorTempoPiloto) melhorTempoPiloto = t3;
        if (t4 < melhorTempoPiloto) melhorTempoPiloto = t4;

        printf("%s %.3f\n", nome, melhorTempoPiloto);

        if (primeiro) {
            melhorTempoGeral = melhorTempoPiloto;
            strcpy(nomeMelhorGeral, nome);
            primeiro = 0;
        } else {
            if (melhorTempoPiloto < melhorTempoGeral) {
                melhorTempoGeral = melhorTempoPiloto;
                strcpy(nomeMelhorGeral, nome);
            }
        }
    }

    printf("\nMelhor piloto da prova: %s\n", nomeMelhorGeral);

    fclose(arq);
    return 0;
}