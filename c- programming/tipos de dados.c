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

 //4. Faça um programa que leia a idade de 4 pessoas e calcule a média

int main(){
     float num1,num2,num3,num4, media;
     

    printf("Digite a idade do primeiro :");
    scanf("%f",&num1);

    printf("Digite a idade do segundo :");
    scanf("%f",&num2);

    printf("Digite a idade do terceiro :");
    scanf("%f",&num3);

    printf("Digite a idade do quarto :");
    scanf("%f", &num4);

    media = (num1+num2+num3+num4) / 4 ;

    printf("%2.0f + %2.0f + %2.0f + %2.0f = %2.2f",num1,num2,num3,num4,media);

}

//5. Faça um programa que leia o código (inteiro) e salário de 5 funcionários e
//imprima o relatório com valores justificados à direita

int main(){

    int cod1,cod2,cod3;
    float sal1,sal2,sal3;

    printf("Digite o codigo do usuario (tres numeros): ");
    scanf("%d", &cod1);

    printf("Digite o salario do usuario :");
    scanf("%f", &sal1);

        printf("Digite o codigo do usuario (tres numeros): ");
    scanf("%d", &cod2);

    printf("Digite o salario do usuario :");
    scanf("%f", &sal2);

        printf("Digite o codigo do usuario (tres numeros): ");
    scanf("%d", &cod3);

    printf("Digite o salario do usuario :");
    scanf("%f", &sal3);

    printf("O salario do funcionario %03d e de %10.2f\nO salario do funcionario %03d e de %10.2f\nO salario do funcionario %03d e de %10.2f\n",cod1, sal1, cod2, sal2, cod3, sal3);
}

//6.Faça um programa para converter números de formato decimal para
hexadecimal

  int main (){
        int num;

     printf("Digite um numero para ser convertido para hexadecimal: ");
     scanf("%d",&num);
     
     printf("Seu numero em hexadecimal e: %x", num);
}


//7.Faça um programa para calcular as raízes de uma equação do 1º grau (ax + b = 0).
//Casos de teste:

  int main(){

        float A,B,raiz;

        printf("Digite o valor de A: ");
        scanf("%f", &A);

        printf("Digite o valor de B:");
        scanf("%f", &B);
        
        raiz = -B/A;

        printf("Sua raiz de X e igual a %.2f", raiz);
        
    }














