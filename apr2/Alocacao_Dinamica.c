#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cria_vetor(int N) {
    int *ptr, i, num_sortido;

    
    ptr = (int*)malloc(N * sizeof(int));
    if (ptr == NULL) {
        printf("Erro na alocação de memória!\n");
        return 0;
    }

    
    srand(time(0));

    
    printf("Vetor gerado: ");
    for (i = 0; i < N; i++) {
        num_sortido = rand() % 100; 
        ptr[i] = num_sortido;
        printf("%d ", ptr[i]);
        return ptr;
    }
    printf("\n");

    
    
}

int main() {
    int N;
    printf("Qual o tamanho do vetor: ");
    scanf("%d", &N);
    cria_vetor(N);
    return 0;
}
------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    float nota1, nota2;
    int faltas;
} aluno;

void le_aluno(aluno *a) {
    printf("codigo: ");
    scanf("%d", &(a->codigo));
    printf("nota 1: ");
    scanf("%f", &(a->nota1));
    printf("nota 2: ");
    scanf("%f", &(a->nota2));
    printf("faltas: ");
    scanf("%d", &(a->faltas));
}

aluno* le_turma(int N) {
    aluno *turma = (aluno*) malloc(N * sizeof(aluno));
    for (int i = 0; i < N; i++) {
        printf("\nAluno %d\n", i + 1);
        le_aluno(&turma[i]);
    }
    return turma;
}

void imprime_aluno(aluno *a) {
    printf("%d\t%.1f\t%.1f\t%d\n", a->codigo, a->nota1, a->nota2, a->faltas);
}

void imprime_turma(aluno *turma, int qtd_alunos) {
    printf("\nCodigo\tNota 1\tNota 2\tFaltas\n");
    for (int i = 0; i < qtd_alunos; i++) {
        imprime_aluno(&turma[i]);
    }
}

int main() {
    const int MAX_TURMAS = 10;
    aluno* turmas[MAX_TURMAS];
    int qtd_alunos[MAX_TURMAS];
    int num_turmas;

    printf("Quantas turmas deseja cadastrar (max 10)? ");
    scanf("%d", &num_turmas);

    if (num_turmas < 1 || num_turmas > MAX_TURMAS) {
        printf("Número de turmas inválido.\n");
        return 1;
    }

    for (int i = 0; i < num_turmas; i++) {
        printf("\nTurma %d\n", i + 1);
        printf("Digite o tamanho da turma: ");
        scanf("%d", &qtd_alunos[i]);
        turmas[i] = le_turma(qtd_alunos[i]);
    }

    for (int i = 0; i < num_turmas; i++) {
        printf("\nTurma %d:\n", i + 1);
        imprime_turma(turmas[i], qtd_alunos[i]);
    }

    for (int i = 0; i < num_turmas; i++) {
        free(turmas[i]);
    }

    return 0;
}

    
