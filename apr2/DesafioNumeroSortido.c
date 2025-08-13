// implementar em Linguagem C o seguinte Jogo:
// São sorteados cinco números de 0 a 9 distintos
// O jogador deve acertar os números na ordem correta A cada jogada, o programa imprime
// Um * para cada número certo no lugar certob) Um # para cada número certo no lugar errado O jogo termina quando o jogador acertar o número ou o número máximo de tentativas for esgotado
// Observações
// O programa deve imprimir primeiro todos os asteriscos e depois os hashtags
// O programa não deve deixar o usuário digitar números repetidos

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, num_sortido, senha[4];

    printf("Jogo da senha!\n");
    for (i = 0; i < 5; i++)
    {
        srand(time(0));
        num_sortido = rand() % 10;  //o num_sortido na esta sorteando
        senha[i] = num_sortido;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d",senha[i]);
    }
}
