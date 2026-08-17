#include<stdio.h>
#include<stdlib.h>
#define max 7

typedef struct {
    int *items;
    int n;
} O_list;

int is_Empyt(O_list lista){
   return lista.n == 0;
}

int size(O_list lista){
    return lista.n;
}

void clear(O_list lista){
    free(lista.items);
    free(lista.n);
}

int get(int index,O_list lista){
    if(is_Empyt){
        printf("Lista vazia");
        return 0;
    } else return lista.items[index];
}

int insert(O_list lista,int index){
    if(size == max)return 0;
    for(int i = 0; i < lista.n; i++){
        
    }
}