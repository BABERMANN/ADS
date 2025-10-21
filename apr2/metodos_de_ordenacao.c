#include <stdlib.h>
#include <stdio.h>
#define tchave int

typedef struct{
    tchave chave;
    float media;
    char conceito;
}registro;




 int main(){
    int n;
    FILE *file = fopen("tabela_desordenada.jlf", "rb");

    if (file == NULL) {
    perror("Erro ao abrir o arquivo");
    return 1;
    } 


    fread(&n, sizeof(int),1,file);
    printf("%d", n);

    registro *ptr = (registro *) malloc(n*sizeof(registro));
    fread(ptr, sizeof(registro),1,file);
    




 }
