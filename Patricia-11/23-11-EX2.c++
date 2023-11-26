/*
Uma lista dinâmica com encadeamento duplo é um conjunto de elementos ligados
em sequência, no qual os elementos estão encadeados de modo que cada um aponte
para o próximo e para o anterior, formando, assim, uma cadeia de dois sentidos.
Nesse tipo de lista, o anterior do primeiro elemento e o posterior do último apontam
para NULL, indicando o início e o final da lista, respectivamente. Diversas operações
podem ser implementadas, sendo as mais comuns: a inclusão, a exclusão e a
impressão.
Com base nisso, sua tarefa, neste desafio, é declarar uma lista dinâmica
duplamente encadeada e implementar os seguintes métodos na linguagem C:

- Inicializar a lista;
- Inserir elemento no início;
- Inserir elemento no final;
- Excluir elemento do meio da lista;
- Imprimir a lista nos dois sentidos;
- Excluir toda a lista.

Use como base da lista uma estrutura com os seguintes atributos: 
nome, nota e turma, conforme segue:

typedef struct {
char nome[20];
float nota;
int turma;
} Aluno;

Após implementar a lista e os métodos, faça algumas operações de inserção e
exclusão para testar as funcionalidades do exercício e apresente o resultado da tela.
O principal método desse exercício é o que exclui elementos do meio da lista, sendo
que os outros servirão de apoio para o desenvolvimento deste.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar um aluno
typedef struct {
    char nome[20];
    float nota;
    int turma;
} Aluno;

// Estrutura para um nó da lista duplamente encadeada
typedef struct No {
    Aluno aluno;
    struct No* anterior;
    struct No* proximo;
} No;

// Estrutura para a lista duplamente encadeada
typedef struct {
    No* inicio;
    No* fim;
} ListaDuplamenteEncadeada;

// Função para inicializar a lista
void inicializarLista(ListaDuplamenteEncadeada* lista) {
    lista->inicio = NULL;
    lista->fim = NULL;
}

// Função para inserir um elemento no início da lista
void inserirInicio(ListaDuplamenteEncadeada* lista, Aluno aluno) {
    No* novoNo = (No*)malloc(sizeof(No));
    if (novoNo == NULL) {
        printf("Erro ao alocar memória\n");
        exit(EXIT_FAILURE);
    }

    novoNo->aluno = aluno;
    novoNo->anterior = NULL;
    novoNo->proximo = lista->inicio;

    if (lista->inicio == NULL) {
        // Se a lista estiver vazia, o novo nó também será o fim
        lista->fim = novoNo;
    } else {
        // Se a lista não estiver vazia, ajustar o anterior do nó seguinte
        lista->inicio->anterior = novoNo;
    }

    lista->inicio = novoNo;
}

// Função para inserir um elemento no final da lista
void inserirFinal(ListaDuplamenteEncadeada* lista, Aluno aluno) {
    No* novoNo = (No*)malloc(sizeof(No));
    if (novoNo == NULL) {
        printf("Erro ao alocar memória\n");
        exit(EXIT_FAILURE);
    }

    novoNo->aluno = aluno;
    novoNo->anterior = lista->fim;
    novoNo->proximo = NULL;

    if (lista->fim == NULL) {
        // Se a lista estiver vazia, o novo nó também será o início
        lista->inicio = novoNo;
    } else {
        // Se a lista não estiver vazia, ajustar o próximo do nó anterior
        lista->fim->proximo = novoNo;
    }

    lista->fim = novoNo;
}

// Função para excluir um elemento do meio da lista
void excluirMeio(ListaDuplamenteEncadeada* lista, No* no) {
    if (no == NULL) {
        printf("Nó inválido\n");
        return;
    }

    if (no->anterior != NULL) {
        no->anterior->proximo = no->proximo;
    } else {
        // Se o nó a ser excluído é o primeiro, ajustar o início
        lista->inicio = no->proximo;
    }

    if (no->proximo != NULL) {
        no->proximo->anterior = no->anterior;
    } else {
        // Se o nó a ser excluído é o último, ajustar o fim
        lista->fim = no->anterior;
    }

    free(no);
}

// Função para imprimir a lista nos dois sentidos
void imprimirLista(ListaDuplamenteEncadeada lista) {
    No* atual = lista.inicio;
    printf("Lista no sentido normal: ");
    while (atual != NULL) {
        printf("(%s, %.2f, %d) ", atual->aluno.nome, atual->aluno.nota, atual->aluno.turma);
        atual = atual->proximo;
    }
    printf("\n");

    atual = lista.fim;
    printf("Lista no sentido reverso: ");
    while (atual != NULL) {
        printf("(%s, %.2f, %d) ", atual->aluno.nome, atual->aluno.nota, atual->aluno.turma);
        atual = atual->anterior;
    }
    printf("\n");
}

// Função para excluir toda a lista
void excluirLista(ListaDuplamenteEncadeada* lista) {
    No* atual = lista->inicio;
    while (atual != NULL) {
        No* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
    lista->inicio = NULL;
    lista->fim = NULL;
}

int main() {
    ListaDuplamenteEncadeada lista;
    inicializarLista(&lista);

    // Inserir elementos para teste
    Aluno aluno1 = {"Joao", 8.5, 1};
    Aluno aluno2 = {"Maria", 7.8, 2};
    Aluno aluno3 = {"Carlos", 9.3, 1};

    inserirInicio(&lista, aluno1);
    inserirFinal(&lista, aluno2);
    inserirFinal(&lista, aluno3);

    printf("Lista inicial:\n");
    imprimirLista(lista);

    // Excluir elemento do meio (pode ser substituído por uma função que busca um elemento específico)
    No* noMeio = lista.inicio->proximo;
    excluirMeio(&lista, noMeio);

    printf("\nLista após excluir elemento do meio:\n");
    imprimirLista(lista);

    // Excluir toda a lista
    excluirLista(&lista);
    printf("\nLista após excluir todos os elementos:\n");
    imprimirLista(lista);

    return 0;
}
