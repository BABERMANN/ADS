#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cria_vetor(N){
    int *ptr,i,num_sortido;
    srand(time(0));
    *ptr = (int*)malloc(N*sizeof(int));
    for(i = 0; i < N; i++){
    num_sortido = rand() %99;
    *ptr++ = num_sortido;
    printf("%d", *ptr);
    
}
}

int main(){
    int N;
    printf("Qual o tamanho do vetor:");
    scanf("%d", &N);
    cria_vetor(N);''
}

/////////////// TERMINAR!!!!!!!!!
