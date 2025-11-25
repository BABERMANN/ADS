// implementar em Linguagem C o seguinte Jogo:
// São sorteados cinco números de 0 a 9 distintos
// O jogador deve acertar os números na ordem correta A cada jogada, o programa imprime
// Um * para cada número certo no lugar certob) Um # para cada número certo no lugar errado 
//O jogo termina quando o jogador acertar o número ou o número máximo de tentativas for esgotado
// Observações
// O programa deve imprimir primeiro todos os asteriscos e depois os hashtags
// O programa não deve deixar o usuário digitar números repetidos

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, k, num_sortido, cont_tentativas, cont_vitoria, senha[5], senha_tentativa[5], cont_num;

    printf("Jogo da senha!\n");
    printf("O programa vai sortear 5 numeros, voce deve tentar adivinhar a senha em 7 tentativas\n");    // formatar saidas 
    printf(" # = numero certo em posicao errada\n");
    printf(" * = numero certo na posicao certa\n");
    srand(time(0));
    for (i = 0; i < 5; i++)
    {
        num_sortido = rand() % 10; // sorteador de numero
        senha[i] = num_sortido;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d", senha[i]); // printar a senha certa
    }

    printf("\n");

    cont_num = 1;
    for (i = 0; i < 5; i++)
    {
        printf("Digite a posicao do %d\n", cont_num); // ler a tentativa do usuario
        scanf("%d", &senha_tentativa[i]);
        cont_num += 1;
    }

    cont_tentativas = 0;
    cont_vitoria = 0;
    do
    {
        for (i = 0; i < 5; i++)
        {
            if (senha[i] == senha_tentativa[i]) // teste vitoria
            {
                cont_vitoria++;
            }
        }
        printf("CONT VITORIA %d\n", cont_vitoria); // cont vitoria conta ate o 4

        if (cont_vitoria == 5)
        {
            printf("Voce venceu!");
            return 0;
        }

        for (k = 0; k < cont_vitoria; k++) // num certo na posicao certa
        {
            printf("*");
        }
        printf("\n");

        for (j = 0; j < 5; j++)
        {
            for (i = 0; i < 5; i++)
            {

                if (senha[j] == senha_tentativa[i] && i != j) // num certo posicao errado
                    printf("#");
            }
        }

        printf("\n");
        cont_tentativas++;
        cont_vitoria = 0;

        for (i = 0; i < 5; i++)
        {
            cont_num = 0;
            printf("Digite a posicao do %d\n", cont_num); // ler a tentativa do usuario
            scanf("%d", &senha_tentativa[i]);
            cont_num += 1;
        }

    } while (cont_tentativas < 6); // num tentativas

    printf("Voce perdeu :(");    
    return 0;
}
