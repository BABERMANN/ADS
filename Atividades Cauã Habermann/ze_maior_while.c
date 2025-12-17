#include <stdio.h>

int main() {
    float chico = 1.50;
    float ze = 1.10;
    int anos = 0;

    printf("Ano Chico Ze\n");

    while (ze <= chico) {
        anos++;
        chico += 0.02;
        ze += 0.03;
        printf("%d %.2f %.2f\n", anos, chico, ze);
    }

    printf("\nSerao necessarios %d anos.\n", anos);

    return 0;
}