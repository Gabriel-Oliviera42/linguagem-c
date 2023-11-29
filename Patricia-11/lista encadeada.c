#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

int main(void) {
    int op, anterior;
    Aluno aluno;
    No *removido, *lista = NULL;

    do {
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - InserirF\n\t3 - InserirM\n\t4 - Remover\n\t5 - Imprimir\n\t6 - ImprimirC\n");
        printf("\nDigite uma opção: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Digite o nome do aluno: ");
                scanf("%s", aluno.nome);
                printf("Digite a nota do aluno: ");
                scanf("%f", &aluno.nota);
                printf("Digite a turma do aluno: ");
                scanf("%d", &aluno.turma);
                inserir_no_inicio(&lista, aluno);
                break;
            case 2:
                printf("Digite o nome do aluno: ");
                scanf("%s", aluno.nome);
                printf("Digite a nota do aluno: ");
                scanf("%f", &aluno.nota);
                printf("Digite a turma do aluno: ");
                scanf("%d", &aluno.turma);
                inserir_no_fim(&lista, aluno);
                break;
            case 3:
                printf("Digite o nome do aluno: ");
                scanf("%s", aluno.nome);
                printf("Digite a nota do aluno: ");
                scanf("%f", &aluno.nota);
                printf("Digite a turma do aluno: ");
                scanf("%d", &aluno.turma);
                printf("Digite a turma anterior: ");
                scanf("%d", &anterior);
                inserir_no_meio(&lista, aluno, anterior);
                break;
            case 4:
                printf("Digite a turma do aluno para remover: ");
                scanf("%d", &aluno.turma);
                removido = remover(&lista, aluno.turma);
                if (removido) {
                    printf("Aluno removido: %s (Turma: %d, Nota: %.2f)\n", removido->aluno.nome, removido->aluno.turma, removido->aluno.nota);
                    free(removido);
                } else {
                    printf("Aluno não encontrado na lista.\n");
                }
                break;
            case 5:
                imprimir(lista);
                break;
            case 6:
                imprimirContrario(ultimo(&lista));
                break;
            default:
                if (op != 0) {
                    printf("Opção inválida.\n");
                }
        }
    } while (op != 0);

    return 0;
}
