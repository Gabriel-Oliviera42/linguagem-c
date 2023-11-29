#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    float nota;
    int turma;
} Aluno;

typedef struct no {
    Aluno aluno;
    struct no *proximo;
    struct no *anterior;
} No;

void inserir_no_inicio(No **lista, Aluno aluno) {
    No *novo = malloc(sizeof(No));

    if (novo) {
        novo->aluno = aluno;
        novo->proximo = *lista;
        novo->anterior = NULL;
        if (*lista) {
            (*lista)->anterior = novo;
        }
        *lista = novo;
    } else {
        printf("Erro ao alocar memoria");
    }
}

void inserir_no_fim(No **lista, Aluno aluno) {
    No *aux, *novo = malloc(sizeof(No));

    if (novo) {
        novo->aluno = aluno;
        novo->proximo = NULL;

        if (*lista == NULL) {
            *lista = novo;
            novo->anterior = NULL;
        } else {
            aux = *lista;
            while (aux->proximo) {
                aux = aux->proximo;
            }
            aux->proximo = novo;
            novo->anterior = aux;
        }
    } else {
        printf("Erro ao alocar memoria");
    }
}

void inserir_no_meio(No **lista, Aluno aluno, int ant) {
    No *aux, *novo = malloc(sizeof(No));

    if (novo) {
        novo->aluno = aluno;

        if (*lista == NULL) {
            novo->proximo = NULL;
            novo->anterior = NULL;
            *lista = novo;
        } else {
            aux = *lista;
            while (aux->aluno.turma != ant && aux->proximo)
                aux = aux->proximo;
            novo->proximo = aux->proximo;
            if (aux->proximo) {
                aux->proximo->anterior = novo;
            }
            novo->anterior = aux;
            aux->proximo = novo;
        }
    } else {
        printf("Erro ao alocar memoria");
    }
}

No* remover(No **lista, int turma) {
    No *aux, *remover = NULL;

    if (*lista) {
        if ((*lista)->aluno.turma == turma) {
            remover = *lista;
            *lista = remover->proximo;
            if (*lista) {
                (*lista)->anterior = NULL;
            }
        } else {
            aux = *lista;
            while (aux->proximo && aux->proximo->aluno.turma != turma) {
                aux = aux->proximo;
            }
            if (aux->proximo) {
                remover = aux->proximo;
                aux->proximo = remover->proximo;
                if (aux->proximo) {
                    aux->proximo->anterior = aux;
                }
            }
        }
    }

    return remover;
}

void imprimir(No *no) {
    printf("\n\tLista: ");
    while (no) {
        printf("%s (%.2f) ", no->aluno.nome, no->aluno.nota);
        no = no->proximo;
    }
    printf("\n\n");
}

No* ultimo(No **lista) {
    No *aux = *lista;
    while (aux->proximo) {
        aux = aux->proximo;
    }
    return aux;
}

void imprimirContrario(No *no) {
    printf("\n\tLista: ");
    while (no) {
        printf("%s (%.2f) ", no->aluno.nome, no->aluno.nota);
        no = no->anterior;
    }
    printf("\n\n");
}
