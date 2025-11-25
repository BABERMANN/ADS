// 1- Escreva um programa que leia uma matriz 3x3 de númerosinteiros e imprima
// a) Soma dos elementos
// b) Maior e menor elemento
// c) Diagonal principal
// d) Diagonal secundária
// e) Soma dos elementos de cada linha
// f) Maior elemento de cada coluna
// g) Matriz Transposta
// h) Se é uma matriz simétrica
// i) Valor do traço


#include <stdio.h>

main(){

int i,j,matriz[3][3], soma, maior, menor;


soma = 0;
maior = matriz[0][0];

for (i = 0; i < 3; i++){ // leitura matriz
    for (j = 0; i < 3; i++){
        printf("Digite o valor da linha %d coluna %d", i+1, j+1);
        scanf("%d", &matriz[i][j]);
    }
}

for (i = 0; i < 3; i++){ // saida matriz
    for (j = 0; i < 3; i++){
        printf("%5d", matriz[i][j]);
        printf("\n");
    }
}


for (i=0; i < 2; i++){// diagnonal principal
    printf("%5d", matriz[i][i]);
} 

for (i=2; i>=0; i--){ // dignonal secundaria
    printf("%5d", matriz[i][2-i]);
}

for (i = 0; i < 3; i++){ // soma dos elementos
    for (j = 0; i < 3; i++){
    soma += matriz[i][j];
    if (matriz[i][j] > maior){ // achar maior elemento
        maior = matriz[i][j];
    }
    if (matriz[i][j] < menor){ // achar menor elemento
        menor = matriz[i][j];
    } 
    }

    
}


}
