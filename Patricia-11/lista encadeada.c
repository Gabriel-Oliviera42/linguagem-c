#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

int main(void) {

    int     op, valor, anterior;
    No *remover, *lista = NULL;

    do {
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - InserirF\n\t3 - InserirM\n\t4 - Imprimir\n");
        printf("\ndigite um valor: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("digite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(&lista, valor);
            break;
        case 2:
            printf("digite um valor: ");
            scanf("%d", &valor);
            inserir_no_fim(&lista, valor);
            break;
        case 3:
            printf("digite um valor: ");
            scanf("%d", &valor);
            printf("digite o anterior: ");
            scanf("%d", &anterior);
            inserir_no_meio(&lista, valor, anterior);
            break;
        case 4:
            imprimir(lista);
            break;        
        default:
            if (op != 0) {
                printf("op invalido");
            }
        }
    } while (op != 0);
    
    return 0;
}