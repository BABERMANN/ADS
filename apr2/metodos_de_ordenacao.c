#include <stdlib.h>
#include <stdio.h>
#define tchave int

typedef struct{
    tchave chave;
    float media;
    char conceito;
}registro;




 int main(){
    int n,*ptr;
    FILE *file = fopen("tabela_desordenada.jlf", "rb");
    fread(&n, sizeof(int),1,file);
    printf("%d", n);
    registro *ptr = (registro *) malloc(n*sizeof(registro));
    fread(ptr, sizeof(int),1,file);
    




 }
