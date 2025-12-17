#include <stdio.h>
#include <string.h>

void piramide(char *nome) {
    int len = strlen(nome);
    int meio = len / 2;

    for (int i = 0; i <= meio; i++) {
        int inicio = meio - i;
        int fim = meio + i;

        for (int k = 0; k < inicio; k++) {
            printf(" ");
        }

        for (int k = inicio; k <= fim && k < len; k++) {
            printf("%c", nome[k]);
        }

        printf("\n");
    }
}

int main() {
    char nome[100];

    printf("Digite nome: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = 0;

    printf("\n");
    piramide(nome);

    return 0;
}