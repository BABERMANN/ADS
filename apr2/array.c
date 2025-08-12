// 1. Faça um programa que leia 10 valores, armazene em um vetor eimprima:  todos os valores lidos
// • soma dos valores
// • quantidade de números pares

#include <stdio.h>

int main(){
    int i,soma, cont_pares, valor[10];


//add no array, soma valores, contador de pares
printf("Vetor =[");
soma = 0;
cont_pares = 0;
for(i=0;i<10;i++){
scanf("%d", &valor[i]);
soma += valor[i];
if (valor[i] % 2 == 0 ){
        cont_pares++; 
}}



printf("Vetor = [");
for(i=0; i<10; i++){
printf("%3d" , valor[i]);
}
printf("]\n");
printf("Soma dos valores no array:%d\n",soma);
printf("Valores pares:%d",cont_pares);
}

-------------------------------------------------------------------------------
// 2. Faça um programa que leia uma quantidade N que indica o númerode pessoas. Após isso, leia o código de identificação (int) e idadedessas pessoas, armazenando o código em um vetor e a idade emoutro. 
// Imprima um relatório contendo código e idade de todas aspessoas em forma de tabela e, 
// ao final, a altura média e o código/idadeda pessoa mais velha (se houver empate exiba todos).
    
#include <stdio.h>

int main()
{
    int N_pessoas, codigo[50], idade[50], empate[10], i, j, maior_idade, soma_idade, media;

    printf("Quantos codigos seram registrados: ");
    scanf("%d", &N_pessoas);

    // registro dos codigos e idades

    soma_idade = 0;

    printf("Codigos");
    for (i = 0; i < N_pessoas; i++)
    {
        printf("Digite o codigo do condenado (tres digitos): \n");
        scanf("%d", &codigo[i]);
        printf("Digite a idade das pessoas: \n");
        scanf("%d", &idade[i]);

        // maior idade
        maior_idade = 0;
        if (idade[i] > maior_idade)
        {
            maior_idade = idade[i];
        }

        // media
        soma_idade += idade[i];
        media = soma_idade / N_pessoas;
    }

    j = 0;
    for (i = 0; i < N_pessoas; i++)
    {
        if (idade[i] == maior_idade)
        {
            empate[j] = idade[i];
            j++;
        }
    }

    // saida dos valores
    printf(" codigo | altura |\n");
    printf("-----|--------------|\n");
    for (i = 0; i < N_pessoas; i++)
    {
        printf(" %d |    %d idade  |\n", codigo[i], idade[i]);
    }

    return 0;
}

}
