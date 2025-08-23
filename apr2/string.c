// Escreva um programa que leia as informações em uma matriz e imprima
// a) Total de vendas
// b) Total de vendas por semana
// c) Total de vendas por vendedor
// d) Maior total de vendas realizada por um vendedor na mesma semanae) Semana mais lucrativa
// f) Considerando que o salário mensal do vendedor é R$2000,00 + 10% das vendas,qual o nome e salário do vendedor que recebeu o maior salário?
// g) Qual o lucro total da loja (lucro = total de vendas – salário dos vendedores)

#include <stdio.h>

int main() {
    int i, j;
    int maior_venda,soma_vendedor,soma_semana, soma_vendas = 0;

    int vendas[5][4] = {
        {1140, 630, 944, 1173},  // Vendedor 11
        {784, 662, 853, 1144},  // Vendedor 14
        {1069, 797, 1242, 710}, // Vendedor 23
        {984, 1297, 863, 1136}, // Vendedor 45
        {691, 765, 1172, 1181}  // Vendedor 57
    };

    for (j = 0; j < 4; j++) { // Para cada semana
        soma_semana = 0;
        for (i = 0; i < 5; i++) { // Para cada vendedor
            soma_semana += vendas[i][j];
        }
        printf("Soma da semana %d = %d\n", j + 1, soma_semana);
        soma_vendas += soma_semana;
    }

printf("\n");

    for (i = 0; i < 5; i++){
        soma_vendedor = 0;
        maior_venda = 0;
        for (j = 0; j < 4; j++){
            if (maior_venda < vendas[i][j]){
            maior_venda = soma_vendedor;
        }
            soma_vendedor += vendas[i][j];
        }
        printf("Maior venda do vendedor %d = %d\n", i + 1, maior_venda);
        printf("Soma do vendedor %d = %d\n", i + 1,soma_vendedor);
    }

    printf("\n");

 printf("Soma total de vendas = %d\n", soma_vendas);

    
}
