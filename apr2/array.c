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

#include <stdio.h>




int main(){
    int N_pessoas, codigo[50], idade[50], i, maior_idade,soma_idade,media;

    printf("Quantos codigos seram registrados: ");
    scanf("%d",&N_pessoas);

    // registro dos codigos e idades

    soma_idade = 0;

    printf("Codigos");
    for(i = 0;i < N_pessoas;i++){
        printf("Digite o codigo do condenado (tres digitos): \n");
        scanf("%d", &codigo[i]);
        printf("Digite a idade das pessoas: \n");
        scanf("%d", &idade[i]);

    //maior idade
    maior_idade = 0;
    if (idade[i] > maior_idade){
        maior_idade = idade[i];
    }

    //media
    soma_idade += idade[i];
    media = soma_idade / N_pessoas;
    }

    
    //saida dos valores
    printf(" codigo | altura |\n");
    printf("-----|--------------|\n");
    for(i=0; i<N_pessoas; i++){
    printf(" %d |    %d idade  |\n", codigo[i],idade[i]);
    }

    return 0;
}
