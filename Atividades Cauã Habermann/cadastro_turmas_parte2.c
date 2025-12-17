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
    aluno *turmas[10];
    int tamanhos[10];
    int qtd_turmas = 0;
    int opcao = 1;

    while (qtd_turmas < 10 && opcao == 1) {
        printf("\n--- Turma %d ---\n", qtd_turmas + 1);
        printf("Digite o tamanho da turma: ");
        scanf("%d", &tamanhos[qtd_turmas]);

        turmas[qtd_turmas] = le_turma(tamanhos[qtd_turmas]);
        qtd_turmas++;

        if (qtd_turmas < 10) {
            printf("Cadastrar nova turma? (1-Sim / 0-Nao): ");
            scanf("%d", &opcao);
        }
    }

    for (int i = 0; i < qtd_turmas; i++) {
        printf("\n--- Relatorio Turma %d ---", i + 1);
        imprime_turma(turmas[i], tamanhos[i]);
        free(turmas[i]);
    }

    return 0;
}