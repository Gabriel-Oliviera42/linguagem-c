/*

Faça um programa que realize o cadastro de contas bancárias com as
seguintes informações: número da conta, nome do cliente e saldo. O
banco permitirá o cadastramento de apenas 15 contas e não poderá haver
mais que uma conta com o mesmo número. Crie o menu de opções a
seguir.

Menu de opções:

1. Cadastrar contas.
2. Visualizar todas as contas de determinado cliente.
3. Excluir a conta com menor saldo (supondo a não existência de saldos iguais).
4. Sair.

*/

#include <stdio.h>
#include <string.h>


                         //+--------+--------+ 15X Contas
struct Conta {           //| Conta  | Espaço |
    int num;             //+--------+--------+
    float saldo;         //|   num  | 4 bytes|
    char nome[30];       //| saldo  | 4 bytes|
};                       //|  nome  |30 bytes|
                         //+--------+--------+ 


int main() {
struct Conta contas[15];       // Definindo um array de estruturas Conta para armazenar até 15 contas
    int i;                     // Variável de contador
    int op;                    // Variável para guardar a opção do menu
    int posi = 0;              // Variável para acompanhar a posição atual no array
    int achou;                 // Variável de sinalização para determinar se um determinado elemento foi encontrado
    int num_conta;             // Variável para armazenar o número da conta a ser cadastrada
    int menor_saldo;           // Variável para armazenar o saldo da conta com o menor saldo
    char nome_cliente[30];     // Variável para armazenar o nome do cliente a ser consultado

    // -------------- zerando as variaveis da estrutura --------------- 

    for (i = 0; i < 15; i++) {
        contas[i].num = 0;
        strcpy(contas[i].nome, "");
        contas[i].saldo = 0;
    }

    // ------------------- faz isso até digitar 4 ------------------- 
    
    // Loop principal do programa

    do {
        printf("----------------------------------------------------------------\n");
        printf("Menu de Opcoes\n");
        printf("1 - Cadastrar contas\n");
        printf("2 - Visualizar todas as contas de determinado cliente\n");
        printf("3 - Excluir conta de menor saldo\n");
        printf("4 - Sair\n");
        printf("Digite sua opcao: ");
        scanf("%d", &op);
        printf("----------------------------------------------------------------\n");
        
        // ------------ Em caso de não digitar os valores certos ----------- 

        if (op < 1 || op > 4) {
            printf("Opcao invalida\n");
        }

        // ----------------------- Cadastrar contas --------------------- 

        if (op == 1) {  
            if (posi >= 15) { // Verificando se já foram cadastradas 15 contas
                printf("Todas as contas já foram cadastradas!\n");
            } else {
                achou = 0;
                printf("Digite o numero da conta a ser incluida: ");
                scanf("%d", &num_conta);
                
                // Verificando se já existe uma conta com o mesmo número
               
                for (i = 0; i < posi; i++) {
                    if (num_conta == contas[i].num) {
                        achou = 1;
                    }
                }

                if (achou == 1) {
                    printf("Já existe conta cadastrada com esse número\n");
                } else {
                    // Realizando o cadastro da conta
                    contas[posi].num = num_conta;
                    printf("Digite o nome do cliente: ");
                    scanf("%s", contas[posi].nome);
                    printf("Digite o saldo do cliente: ");
                    scanf("%f", &contas[posi].saldo);
                    printf("Conta cadastrada com sucesso\n");
                    posi++;
                }
            }
        }

        // ------------- Visualizar todas as contas de determinado cliente ----------- 

        if (op == 2) {
            printf("Digite o nome do cliente a ser consultado: ");
            scanf("%s", nome_cliente);
            achou = 0;

            // Buscando e exibindo todas as contas do cliente
            for (i = 0; i < posi; i++) {
                if (strcmp(contas[i].nome, nome_cliente) == 0) {
                    printf("%d %.2f\n", contas[i].num, contas[i].saldo);
                    achou = 1;
                }
            }

            if (achou == 0) {
                printf("Não existe conta cadastrada para este cliente\n");
            }
        }

        // ---------------------- Excluir conta de menor saldo -------------------- 

        if (op == 3) {
            if (posi == 0) {
                printf("Nenhuma conta foi cadastrada\n");
            } else {
                menor_saldo = contas[0].saldo;
                achou = 0;
                i = 1;

                // Encontrando a conta com o menor saldo
                while (i < posi) {
                    if (contas[i].saldo < menor_saldo) {
                        menor_saldo = contas[i].saldo;
                        achou = i;
                    }
                    i++;
                }

                // Removendo a conta com o menor saldo
                for (i = achou; i < posi - 1; i++) {
                    contas[i].num = contas[i + 1].num;
                    strcpy(contas[i].nome, contas[i + 1].nome);
                    contas[i].saldo = contas[i + 1].saldo;
                }

                printf("Conta excluída com sucesso\n");
                posi--;
            }
        }
    } while (op != 4);

    return 0;
}
