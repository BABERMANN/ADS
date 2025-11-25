

#include <stdio.h>
#include <stdlib.h> 
#define tchave int

typedef struct {
    tchave chave;
    float valor;   
    char categoria; 
} registro;

typedef struct {
    int tamanho;
    registro *item;
} tabela;



void imprimir_registro(registro a) {
    
    printf("Codigo: %4d", a.chave);
    printf("\tValor: %5.2f", a.valor);
    printf("\tCategoria: %c\n", a.categoria);
}

void imprimir_tabela(tabela T) {
    int i;
    printf("=========================================\n");
    for (i = 0; i < T.tamanho; i++) {
        imprimir_registro(T.item[i]);
    }
    printf("=========================================\n");
}


tabela ler_tabela() {
    FILE* arq;
    tabela T;
    T.tamanho = 0; 
    T.item = NULL; 
    long tamanho_arq;

    // Lendo o seu arquivo
    arq = fopen("produtos.jlf", "rb"); 
    
    if(arq == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo 'produtos.jlf'\n");
        return T; 
    }

    fseek(arq, 0, SEEK_END);
    tamanho_arq = ftell(arq);

    T.tamanho = tamanho_arq / sizeof(registro);

    
    T.item = (registro*) malloc(T.tamanho * sizeof(registro));
    if (T.item == NULL) {
        fprintf(stderr, "Erro ao alocar memoria!\n");
        fclose(arq);
        T.tamanho = 0;
        return T; 
    }

    rewind(arq);
    fread(T.item, sizeof(registro), T.tamanho, arq);

    fclose(arq);
    return T;
}


void selection_sort(tabela t) {
    int i, j, min, n;
    registro aux, *v; 

    v = t.item;
    n = t.tamanho;

    for (i = 0; i < n - 1; i++) {
        min = i; 
        
        for (j = i + 1; j < n; j++) {
            if (v[j].chave < v[min].chave) {
                min = j;
            }
        }

        if (i != min) {
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
        }
    }
}
