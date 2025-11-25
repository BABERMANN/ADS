#include <stdio.h>
#include <string.h>

typedef struct tpersonagem
{
    char nome[15];
    int poder;
} tpersonagem;

void imprime_tabuleiro(char tabuleiro[10][10][15])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (strcmp(tabuleiro[i][j], "") != 0)
                printf("[%s]", tabuleiro[i][j]);
            else
            {
                printf("[-]");
            }
        }
        printf("\n");
    }
}

int posiciona(int linha, int coluna, char nome_personagem[15], char tabuleiro[10][10][15])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (strcmp(tabuleiro[i][j], nome_personagem) == 0)
            {
                strcpy(tabuleiro[i][j], "");
            }
        }
    }
    if (strcmp(tabuleiro[linha][coluna], "") == 0)
    {
        strcpy(tabuleiro[linha][coluna], nome_personagem);
        return 1;
    } 
    else
    { 
        return 0;
    }
}

int main()
{
    int linha, coluna;
    char nome_personagem[15], tabuleiro[10][10][15] = {
                              {"mago", "", "", "", "", "fada", "", "", "", "vampiro"},
                              {"", "", "dragao", "", "", "bruxa", "", "", "", ""},
                              {"", "", "", "", "mago", "", "", "", "", ""},
                              {"", "", "", "", "", "", "feiticeiro", "wendigo", "", ""},
                              {"", "", "", "cavaleiro", "", "", "", "", "", ""},
                              {"", "", "", "", "duende", "", "", "", "", ""},
                              {"", "", "", "", "", "", "vampiro", "", "", ""},
                              {"", "", "", "", "", "anjo", "lobisomem", "", "", ""},
                              {"", "", "gnomo", "", "", "", "", "", "", ""},
                              {"", "", "cavaleiro", "", "", "", "", "", "", "fada"}};

    tpersonagem personagens[30] = {{"anjo", 17}, {"bruxa", 12}, {"cavaleiro", 20}, {"dragao", 18}, {"duende", 5}, {"fada", 10}, {"feiticeiro", 12}, {"gnomo", 8}, {"lobisomem", 9}, {"mago", 15}, {"princesa", 4}, {"vampiro", 13}, {"wendigo", 16}};

    imprime_tabuleiro(tabuleiro);


    printf("Digite o nome do personagem");
    scanf("%s", &nome_personagem);
    printf("Digite a linha");
    scanf("%d", &linha);
    printf("Digite a coluna");
    scanf("%d", &coluna);

    posiciona(linha, coluna, nome_personagem, tabuleiro);

     imprime_tabuleiro(tabuleiro);

    return 0;
}
