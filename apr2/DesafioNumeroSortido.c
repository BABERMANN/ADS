// implementar em Linguagem C o seguinte Jogo:
// São sorteados cinco números de 0 a 9 distintos
// O jogador deve acertar os números na ordem correta A cada jogada, o programa imprime
// Um * para cada número certo no lugar certob) Um # para cada número certo no lugar errado 
//O jogo termina quando o jogador acertar o número ou o número máximo de tentativas for esgotado
// Observações
// O programa deve imprimir primeiro todos os asteriscos e depois os hashtags
// O programa não deve deixar o usuário digitar números repetidos

#include <stdio.h>
#include <stdlib.h>     //debugar!!!! contagem de tentativas, printar os numeros em posicoes certas e em posicoes erradas
#include <time.h>

int main(){
    int i, j,k, num_sortido, cont_tentativas, cont_vitoria, senha[4], senha_tentativa[4];

    printf("Jogo da senha!\n");
    printf("O programa vai sortear 5 numeros, voce deve tentar adivinhar a senha em 7 tentativas\n");
    printf(" # = numero certo em posicao errada\n");
    printf(" * = numero certo na posicao certa\n");
    srand(time(0));
    for (i = 0; i < 5; i++)
    {
        num_sortido = rand() % 10;
        senha[i] = num_sortido;
    }

    for (i=0;i<5;i++) {
    printf("%d",senha[i]);
    }
    cont_tentativas = 0;
    do
    {
        printf("Digite sua tentativa\n");
        scanf("%d", &senha_tentativa[i]);

        for (i = 0; i < 5; i++)
        {
            cont_vitoria = 0;
            if (senha[i] == senha_tentativa[i])  // teste vitoria
            {
                cont_vitoria++;
            }
            if (cont_vitoria == 5)
            {
                printf("Voce venceu!");
                return 0;
            }

            for (k = 0; k < cont_tentativas; k++){  // posicao certa
                printf("*");
            }

            for (j = 0; j < 5; j++)
            {
                if (senha[i] == senha_tentativa[j]) // num certo posicao errado
                    printf("#");
            }
            cont_tentativas++;
        }
    }

    while (cont_tentativas >= 7); // num tentativas

    printf("Voce perdeu :(");
    return 0;

}
