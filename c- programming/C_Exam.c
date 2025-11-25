#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char cidades[26];
    float temperatutas[7];
}c;
int num_registros;

typedef struct 
{
    char cidades[26];
    float temp_media;
}tmed;




c *le_temperatura(){ //le o arquivo, diz a quantida de registros dentro, aloca memoria o suficiente, faz um array de structs com os dados do arquivo
    
    c *estrutura_clima;
    int qntd_bytes, qntd_registros;
    FILE * arq = fopen("temperaturas.jlf","rb");
    
    // if(arq == NULL){
    //     puts("erro");
    //     return 1;
    // }
    
    fseek(arq,0,SEEK_END);
    qntd_bytes = ftell(arq);
    qntd_registros = qntd_bytes/sizeof(c);
    num_registros = qntd_registros; 
    printf("Quantidade de registros: %d", qntd_registros);
    
estrutura_clima = (c *) malloc(qntd_registros*sizeof(c));
rewind(arq);
fread(estrutura_clima,sizeof(c),qntd_registros,arq);
fclose(arq);
return estrutura_clima;
}

char ** cria_vetor_cidades(c * lista){ // crio um espaco na memoria para alocar ponteiros, esses ponteiros apontam para as strings com os nomes das cidades,
    int i;
    char **cidades;
    cidades = (char**) malloc(num_registros*sizeof(char*));
    for(i = 0;i < num_registros;i++){
        cidades[i] = malloc(26);
        strcpy(cidades[i],lista[i].cidades);
    }
    return cidades;
}

float ** cria_matriz_temperaturas(c * lista){ // crio um espaco na memoria para um array de ponteiros, esses ponteiros apontam para um array de floats que indicam a temperatura
    int i,j;
    float ** temp;
    temp = (float**) malloc(num_registros*sizeof(float *));
    for (i = 0; i < num_registros; i++){
        temp[i] = malloc(7*sizeof(float));
        temp[i] = lista[i].temperatutas;
        for (j = 0; j < 7;j++);
    }
    return temp;
}

tmed * organiza_temperatura_media(char ** cidades, float ** tempera){
    int i,j;
    float soma;
    tmed * tm = (tmed *) malloc(num_registros*sizeof(tmed));
    for(i = 0; i < num_registros; i++){
        strcpy(tm[i].cidades,cidades[i]);
        soma = 0;
        for(j = 0; j < num_registros; j++){
            soma += tempera[i][j];
            tm[i].temp_media = soma/7;
        }
        
    }
return tm;
}

void ordena(tmed * tmedia)
{
int i,j,n,min;
tmed aux;
n = num_registros;
for (i=0;i<n-1;i++){
min = i;
for (j=i+1;j<n;j++)
if (tmedia[j].temp_media<tmedia[min].temp_media) min = j;
aux = tmedia[i];
tmedia[i] = tmedia[min];
tmedia[min] = aux;
}
}

void cria_arq(tmed * tmedia){

    int i,j ;
    FILE *arq_temp;
    arq_temp = fopen("Temperaturas formatado min","W");
    fprintf(arq_temp,"t/Media temperaturas");
    fprintf(arq_temp," ID Cidade Temperatura media\n");
    i = 0;
    while (tmedia[i].temp_media <= 25){
        fprintf(arq_temp,"%d %s %7.2f",i + 1,tmedia[i].cidades,tmedia[i].temp_media);
        i++;
    }
    fclose(arq_temp);

    FILE *arq_temp1;
    arq_temp1 = fopen("Temperaturas formatado max","W");
    fprintf(arq_temp1,"t/Media temperaturas");
    fprintf(arq_temp1," ID Cidade Temperatura media\n");
    j = 1;
    while (i < num_registros)
    {
    fprintf(arq_temp1,"%d %s %7.2f",j,tmedia[i].cidades,tmedia[i].temp_media);
    }
    fclose(arq_temp1);
}

void dias_frios(float **tempera){
int i,j;
int conta_frio[7] = {0};
char dias[7][4] = {"SEG","TER","QUA","QUI","SEX","SAB","DOM"};
for(i = 0; i < 7; i ++){
    for(j = 0; j < num_registros; j++){
        if (tempera[i][j] < 16){
            conta_frio[i]++;
        }
    }
    puts("Cidades com temperaturas abaixo de 16 graus");
    puts("Dia Cidades ");
    for(i = 0; i < 7;){
        printf("%s %d",dias[i], conta_frio[i]);
    }
}

}

int main(){
    c * lista = le_temperatura(); // atribuo o ponteiro "lista" para o array onde os registros estao

    char ** cidades = cria_vetor_cidades(lista); // atribuo o ponteiro "cidade" para o array onde estao as strings

    float ** tempera = cria_matriz_temperaturas(lista); // atribuo o ponteiro "tempera" para a matriz onde estao as temperaturas

    free(lista); // apago o array para structs

    tmed * tmedia = organiza_temperatura_media(cidades,tempera); // os arrays com os nomes das cidades e as temperaturas de cada dia da semana, eu os organizei em uma struct, fazendoa media das temperatutas

    ordena(tmedia); // organiza o vetor 

    cria_arq(tmedia); // cria arquivos com as temperaturas medias abaixo de 25 graus e as acima 25

    dias_frios(tempera); // usa tempera que é o ponteiro para ponteiros para passar pelas temperaturas de cada dia da semana para analisando os dias que sao abaixo de 16 graus, esses vao para um contador.

    


}
