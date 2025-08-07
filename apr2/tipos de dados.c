//Escreva um programa que leia dia, mês e ano de nascimento uma pessoa.
//Imprima a frase “Você nasceu em xx/xx/xxxx.”


#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("Escreva o dia do seu aniversario\n");
    scanf("%d", &dia);
    if(dia < 1 || dia > 31 ){
        printf("dia incorreto\n");
        return 0;
    }

    printf("Escreva o mes do seu nascimento\n");
    scanf("%d", &mes);
       if(mes < 1 || mes > 12 ){
        printf("mes incorreto\n");
        return 0;
    }

    printf("Digite o ano do nascimento\n");
    scanf("%d", &ano);
    if(ano > 2025){
        printf("viagem no tempo ainda nao foi descoberta\n");
        return 0;
    }
    
    printf("voce nasceu no dia: %02d/%02d/%04d",dia, mes ,ano);
    
}

//2. Faça um programa que leia 3 valores inteiros e calcule a soma e o produto

#include <stdio.h>

int main(){

    int num1,num2,num3;

    printf("Digite o primeiro numero inteiro:");
    scanf("%d",&num1);

    printf("Digite o segundo numero inteiro:");
    scanf("%d",&num2);

    printf("Digite o terceiro numero inteiro:");
    scanf("%d",&num3);


    printf("%d+%d+%d = %d\n", num1,num2,num3, num1+num2+num3);
    printf("%d.%d.%d = %d",num1,num2,num3, num1*num2*num3);

//3. Faça um programa para calcular a área do círculo

int main(){
    float raio;
    printf("Digite o raio da circuferencia:");
    scanf("%f",&raio);

    printf("A area da circuferencia: %f", 3.14 * raio * raio);
    
    return 0;
}

