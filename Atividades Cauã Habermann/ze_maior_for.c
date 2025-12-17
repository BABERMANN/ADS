#include <stdio.h>

int main() {
    float chico = 1.50;
    float ze = 1.10;

    printf("Ano Chico Ze\n");

    for (int i = 1; i <= 30; i++) {
        chico += 0.02;
        ze += 0.03;
        
        printf("%d %.2f %.2f\n", i, chico, ze);
    }

    return 0;
}