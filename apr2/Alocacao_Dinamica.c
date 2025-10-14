#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cria_vetor(int N) {
    int *ptr, i, num_sortido;

    
    ptr = (int*)malloc(N * sizeof(int));
    if (ptr == NULL) {
        printf("Erro na alocação de memória!\n");
        return 0;
    }

    
    srand(time(0));

    
    printf("Vetor gerado: ");
    for (i = 0; i < N; i++) {
        num_sortido = rand() % 100; 
        ptr[i] = num_sortido;
        printf("%d ", ptr[i]);
        return ptr;
    }
    printf("\n");

    
    
}

int main() {
    int N;
    printf("Qual o tamanho do vetor: ");
    scanf("%d", &N);
    cria_vetor(N);
    return 0;
}
------------------------------------------------------------------------------------
