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
