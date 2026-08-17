#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int max;
    int n;
    int *items;    
} t_list;


t_list* create_list(int max) {
    t_list *list = malloc(sizeof(t_list));
    list->max = max;
    list->n = 0;
    list->items = malloc(sizeof(int) * max);
    return list;
}

void destroy_list(t_list *list) {
    free(list->items);
    free(list);
}

int size(t_list *list) {
    return list->n;
}

int is_empty(t_list *list) {
    return list->n == 0;
}

int is_full(t_list *list) {
    return list->n == list->max;
    
    // if (list->n == list->max) {
    //     return 1;
    // }
    // return 0;
}

int append(t_list *list, int elem) {
    if (is_full(list)) {
        return -1;
    }
    list->items[list->n] = elem;
    list->n++;
    return list->n - 1; // retorna a posicao que inseriu
}

int insert(t_list *list, int index, int elem) {
    if (is_full(list) || index > list->n) {
        return 0;
    } 
    
    for (int i = list->n; i > index; i--) {
        list->items[i] = list->items[i-1];
    }
    list->items[index] = elem;
    list->n++;
    return 1;
}

int index_of(t_list *list, int elem) {
    for(int i = 0; i < list->n; i++){
        if(list->items[i] == elem){
            return i;
        }
    }
    return -1;
}

int remove_last(t_list *list) {
    if (is_empty(list)) {
        return -1;
    }
    list->n--;
    return list->n; // retorna o tamanho da lista 
}

int remove_element(t_list *list, int element){
    if(is_empty(list)){
        return 0;
    }
    
    int position = index_of(list, element);
    if(position == -1){
        return 0;
    }

    for(int i = position; i < size(list) - 1; i++){
        list->items[i] = list->items[i + 1];
    }

    list->n--;
    return 1;
}

void print_list(t_list *list) {
    printf("[");
    for (int i = 0; i < list->n; i++) {
        printf("%d ", list->items[i]);
    }
    printf("]\n");

}

int main(int argc, char *argv[]) {
    t_list *list;

    list = create_list(5);

    append(list, 3);
    append(list, 7);
    append(list, 1);
    append(list, 5);
    print_list(list);
    insert(list, 1, 10);
    print_list(list);
    append(list, 2);
    append(list, 0);
    print_list(list);
    remove_last(list);
    remove_last(list);
    print_list(list);
    int indice = index_of(list,7);
    printf("Indice: %d ", indice);
}