#include <stdio.h>
#include <stdlib.h>
typedef int tchave;

typedef struct 
{
    tchave chave;
    float valor;
    char categoria;
}registros;

// conferir o tamanho do arquivo
int main(){
FILE* arq;
int qntd_registros;
long tamanho_arq;

arq = fopen("produtos.jlf","rb");
if(arq == NULL){
    printf("Erro ao abrir o arquivo:");
    return 1;
}

fseek(arq, 0, SEEK_END);
tamanho_arq = ftell(arq);
qntd_registros = tamanho_arq / sizeof(registros);

printf("Tamanho do arquivo: %ld Bytes\n",tamanho_arq);
printf("Quantidade de registros: %d",qntd_registros);
//#########################################################

//printar as informacoes no arquivo

registros registro_temp;
int i = 1; //contador para ver qual registro estamos lendo

rewind(arq);

while(fread(&registro_temp, sizeof(registros), 1, arq) == 1){ 
    printf("registro %d\n", i);
    printf("chave : %d\n", registro_temp.chave);
    printf("valor : %f\n", registro_temp.valor);
    printf("categoria: %c\n", registro_temp.categoria);
    printf("\n");

    i++;
}

fclose(arq);

}
