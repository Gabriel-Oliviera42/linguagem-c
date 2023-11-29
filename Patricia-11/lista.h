#include <stdlib.h>
#include <stdio.h>

typedef struct no {
    int valor;
    struct no *proximo;
    struct no *anterior;
} No;

void inserir_no_inicio(No **lista, int num) {
    No *novo = malloc(sizeof(No));

    if(novo) {
        novo -> valor = num;
        novo -> proximo = *lista;
        novo -> anterior = NULL;
        if(*lista) {
            (*lista) -> anterior = novo;
        }
        *lista = novo;
    } else {
        printf("Erro ao alocar memoria");
    }
}

void inserir_no_fim(No **lista, int num) {
    No *aux, *novo = malloc(sizeof(No));

    if(novo) {
        novo -> valor = num;
        novo -> proximo = NULL;
        
        // é o primeiro?
        if (*lista == NULL) {
            *lista = novo;
            novo -> anterior = NULL;
        } else {
            aux = *lista;
            while (aux -> proximo) {
                aux = aux -> proximo;
            }
            aux -> proximo = novo;
            novo -> anterior = aux;
        }
    } else {
        printf("Erro ao alocar memoria");
    }
}

void inserir_no_meio(No **lista, int num, int ant) {
    No *aux, *novo = malloc(sizeof(No));

    if(novo) {
        novo -> valor = num;
        // é o primeiro?
        if (*lista == NULL) {
            novo -> proximo = NULL;
            novo -> anterior = NULL;
            *lista = novo;
        } else {
            aux = *lista;
            while(aux->valor != ant && aux->proximo)
                aux = aux->proximo;
            novo->proximo = aux->proximo;
            if(aux->proximo) {
                aux->proximo->anterior = novo;
            }
            novo->anterior = aux;
            aux->proximo = novo;
        }
    } else {
        printf("Erro ao alocar memoria");
    }
}

No* remover(No **lista, int num) {
    No *aux, *remover = NULL;

    if(*lista) {
        if((*lista) -> valor == num) {
            remover = *lista;
            *lista = remover -> proximo;
            if(*lista) {
                (*lista) -> anterior = NULL;
            }
        } else {
            aux = *lista;
            while (aux -> proximo && aux -> proximo -> valor != num) {
                aux = aux -> proximo;
            }
            if (aux -> proximo) {
                remover = aux -> proximo;
                aux -> proximo = remover -> proximo;
                if(aux -> proximo) {
                    aux -> proximo -> anterior = aux;
                }
            }
        } 
    }

    return remover;
}

void imprimir(No *no) {
    printf("\n\tLista: ");
    while (no) {
        printf("%d ", no -> valor);
        no = no -> proximo;
    }
    printf("\n\n");
}

No* ultimo (No **lista) {
    No *aux = *lista;
    while (aux -> proximo) {
        aux = aux -> proximo;
    }
    return aux;
}

void imprimirContrario(No *no) {
    printf("\n\tLista: ");
    while (no) {
        printf("%d ", no -> valor);
        no = no -> anterior;
    }
    printf("\n\n");
}