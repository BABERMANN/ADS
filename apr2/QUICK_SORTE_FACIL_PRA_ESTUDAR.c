#define tchave int
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>

int v[] = {13, 2, 7, 18, 6, 5, 12, 10, 8, 9, 4, 11, 1, 3, 19, 17};

int participacao(int v[], int esq, int dir) {
    int i, j;
    int aux, pivo;
    
    pivo = v[(esq + dir) / 2]; 
    
    i = esq;
    j = dir;
    
    while (i <= j) {
        while (v[i] < pivo) i++; 
        while (pivo < v[j]) j--; 
        
        if (i <= j) {
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            i++; 
            j--; 
        }
    }
    return i; 
}

void quicksort(int v[], int esq, int dir) {
    int pivo_indice = participacao(v, esq, dir);
    
    if (esq < pivo_indice - 1)
        quicksort(v, esq, pivo_indice - 1);
        
    if (pivo_indice < dir)
        quicksort(v, pivo_indice, dir);
}

void imprimir_vetor(int tamanho) {
    int k;
    for (k = 0; k < tamanho; k++) {
        printf("%d ", v[k]);
    }
    printf("\n");
}

int main() {
    int n = sizeof(v) / sizeof(v[0]);
    
    printf("Vetor Original:\n");
    imprimir_vetor(n);
    
    quicksort(v, 0, n - 1);
    
    printf("\nVetor Ordenado:\n");
    imprimir_vetor(n);
    
    return 0;
}
