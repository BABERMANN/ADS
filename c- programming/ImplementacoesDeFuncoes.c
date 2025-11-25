// Escreva a função pot(x,y), que encontra o
// valor xy
// , onde y é um número inteiro.

#include <stdio.h>

int resultado(int x, int y) {
    int c = 1, i;

    for (i = 0; i < y; i++) {
        c *= x;
    }

    return c;
}

int main() {
    int x, y;


    printf("Digite o valor de X: ");
    scanf("%d", &x);
    
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    
    printf("Resultado: %d\n", resultado(x, y));

    return 0;
}

// ==========================================================================================
