
// 1.    Defina o tipo tpersonagem com campos para armazenar nome do personagem e nível de poder.

// 2.    Escreva a função imprime_tabuleiro(tabuleiro), que imprime o tabuleiro com os personagens posicionados.

// 3.    Escreva a função posiciona(linha, coluna, nome_personagem ,tabuleiro), que coloca o personagem no tabuleiro na posição indicada. A função deve retornar 1 se a operação for bem sucedida, ou zero se a posição for inválida.

// 4.    Escreva a função ocorrencias(nome_personagem,tabuleiro), que retorna o número de vezes que o personagem aparece no tabuleiro.

// 5.    Escreva a função poder_total(personagens,tabuleiro), que retorna a soma do nível de poder de todos os personagens localizados no tabuleiro.

// 6.    Escreva a função ataca(linha,coluna,,personagens,tabuleiro), que lança uma ofensiva contra o personagem na posição indicada. A função apagar o personagem do tabuleiro e retornar o nível de poder do personagem atingido, ou zero se a posição estiver vazia ou a posição for inválida.







#include <stdio.h>

int main()
{
  char tabuleiro[10][10][15] = {
         {"mago", "", "", "", "", "fada", "", "","","vampiro"},
         {"", "", "dragao", "", "", "bruxa", "", "","",""},
         {"", "", "", "", "mago", "", "", "","",""},
         {"", "", "", "", "", "", "feiticeiro", "wendigo", "",""},
         {"", "", "", "cavaleiro", "", "", "", "","",""},
         {"", "", "", "", "duende", "", "", "","",""},
         {"", "", "", "", "", "", "vampiro",  "","",""},
         {"", "", "", "", "", "anjo", "lobisomem", "","",""},
         {"", "", "gnomo", "", "", "", "", "","",""},
         {"", "", "cavaleiro", "", "", "", "", "","","fada"}};
           

  tpersonagem  personagens[30]= {{"anjo",17},{"bruxa",12},{"cavaleiro",20},{"dragao",18},{"duende",5},
	{"fada",10},{"feiticeiro",12},{"gnomo",8},{"lobisomem",9},{"mago",15},{"princesa",4},
	{"vampiro",13},{"wendigo",16}};
	
	
	
	return 0;
}
