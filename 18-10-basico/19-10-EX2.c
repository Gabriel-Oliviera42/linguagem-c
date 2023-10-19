#include <stdio.h>
#include <string.h>

#define MAX_CONTAS 15
#define LIMITE_NOME 50

struct Conta {
    int num;
    float saldo;
    char nome[LIMITE_NOME];
};

int main() {
    struct Conta conta[MAX_CONTAS];
    int i, op, posi = 0, achou, num_conta, menor_saldo;
    char nome_cliente[LIMITE_NOME];

    for (i = 0; i < MAX_CONTAS; i++) {
        conta[i].num = 0;
        strcpy(conta[i].nome, "");
        conta[i].saldo = 0;
    }

    do {
        printf("Menu de Opções\n");
        printf("1 - Cadastrar contas\n");
        printf("2 - Visualizar todas as contas de determinado cliente\n");
        printf("3 - Excluir conta de menor saldo\n");
        printf("4 - Sair\n");
        printf("Digite sua opção: ");
        scanf("%d", &op);

        if (op < 1 || op > 4) {
            printf("Opção inválida\n");
        }

        if (op == 1) {
            if (posi >= MAX_CONTAS) {
                printf("Todas as contas já foram cadastradas!\n");
            } else {
                achou = 0;
                printf("Digite o número da conta a ser incluída: ");
                scanf("%d", &num_conta);

                for (i = 0; i < posi; i++) {
                    if (num_conta == conta[i].num) {
                        achou = 1;
                    }
                }

                if (achou == 1) {
                    printf("Já existe conta cadastrada com esse número\n");
                } else {
                    conta[posi].num = num_conta;
                    printf("Digite o nome do cliente: ");
                    scanf("%s", conta[posi].nome);
                    printf("Digite o saldo do cliente: ");
                    scanf("%f", &conta[posi].saldo);
                    printf("Conta cadastrada com sucesso\n");
                    posi++;
                }
            }
        }

        if (op == 2) {
            printf("Digite o nome do cliente a ser consultado: ");
            scanf("%s", nome_cliente);
            achou = 0;

            for (i = 0; i < posi; i++) {
                if (strcmp(conta[i].nome, nome_cliente) == 0) {
                    printf("%d %f\n", conta[i].num, conta[i].saldo);
                    achou = 1;
                }
            }

            if (achou == 0) {
                printf("Não existe conta cadastrada para este cliente\n");
            }
        }

        if (op == 3) {
            if (posi == 0) {
                printf("Nenhuma conta foi cadastrada\n");
            } else {
                menor_saldo = conta[0].saldo;
                achou = 0;
                i = 1;

                while (i < posi) {
                    if (conta[i].saldo < menor_saldo) {
                        menor_saldo = conta[i].saldo;
                        achou = i;
                    }
                    i++;
                }

                for (i = achou; i < posi - 1; i++) {
                    conta[i].num = conta[i + 1].num;
                    strcpy(conta[i].nome, conta[i + 1].nome);
                    conta[i].saldo = conta[i + 1].saldo;
                }

                printf("Conta excluída com sucesso\n");
                posi--;
            }
        }
    } while (op != 4);

    return 0;
}
