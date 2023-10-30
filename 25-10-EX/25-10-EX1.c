/*

Faça um programa que efetue reserva de passagens aéreas de determinada
companhia. O programa deverá ler os números dos aviões e o número de lugares
disponíveis em cada um. Utilize um vetor de quatro posições, no qual cada posição
representa um avião, e outro vetor também de quatro posições para armazenar os
lugares disponíveis.

O programa deverá mostrar o seguinte menu de opções:

1. Cadastrar o número dos aviões.
2. Cadastrar o número de lugares disponíveis em cada avião.
3. Reservar passagem.
4. Consultar por avião.
5. Consultar por passageiro.
6. Finalizar.

Imagine que poderão ser registradas até 60 reservas e que cada uma deverá possuir o
número do avião e o nome do passageiro.
Para realizar a opção 1, deverá ser solicitado ao usuário o número dos quatro aviões
disponíveis.
Para realizar a opção 2, deverá ser solicitado ao usuário o número de lugares
disponíveis em cada avião cadastrado na opção 1.
Para realizar a opção 3, deverá ser verificado se o número do avião digitado é válido.
Posteriormente, checar se, no avião escolhido, ainda existe lugar disponível. Caso
exista, o programa deverá diminuir o total de vagas e mostrar a mensagem Reserva
confirmada. Caso contrário, deverá mostrar a mensagem Voo lotado. Observe que não
podem ser feitas mais de 60 reservas.
Para realizar a opção 4, deverá ser solicitado o número do avião desejado e,
posteriormente, deverão ser exibidas todas as suas reservas.
Para realizar a opção 5, deverá ser solicitado o nome do passageiro e, posteriormente,
deverão ser exibidas todas as reservas feitas em seu nome.
A opção 6 encerra o programa.

*/

#include <stdio.h>
#include <string.h>


                         //+--------+--------+ 60X Contas
struct Reservas {        //|Reservas| Espaço |
    int num_avi;         //+--------+--------+
    char nome[30];       //|   num  | 4 bytes|
};                       //|  nome  |30 bytes|
                         //+--------+--------+ 


int main() {
    struct Reservas reserva[60];
    int avi[4] = {0, 0, 0, 0};
    int lug[4] = {0, 0, 0, 0};
    int i;
    int op;
    int pos_livre = 0;
    int achou;
    int numero;
    int posi;
    char nome[30];

    for (i = 0; i < 60; i++) {
        reserva[i].num_avi = 0;
        strcpy(reserva[i].nome, "");
    }

    do {
        printf("----------------------------------------------------------------\n");
        printf("Menu de Opcoes\n"); 
        printf("1 - Cadastrar o numero dos avioes.\n");                            // Pede ao usuario os nomes de cada avião, normalmente usarems números
        printf("2 - Cadastrar o numero de lugares disponiveis em cada aviao\n");   // Pede ao usuario para colocar quantos lugares vagos tem em cada avião, até no maximo 60
        printf("3 - Reservar passagem.\n");                                        // 
        printf("4 - Consultar por aviao.\n");
        printf("5 - Consultar por passageiro.\n");
        printf("6 - Finalizar.\n");
        printf("Digite sua opcao: ");
        scanf("%d", &op);
        printf("----------------------------------------------------------------\n");

        switch (op) {
            case 1:
                for (i = 0; i < 4; i++) {
                    printf("Digite o %d* Aviao: ", i + 1);
                    scanf("%d", &avi[i]);
                }
                break;
            case 2:
                for (i = 0; i < 4; i++) {
                    printf("Digite o número de lugares disponíveis no %d* aviao: ", i + 1);
                    scanf("%d", &lug[i]);
                }
                break;
            case 3:
                printf("Digite o numero do aviao no qual deseja efetuar a reserva: ");
                scanf("%d", &numero);
                if (pos_livre >= 60) {
                    printf("Reservas em todos os avioes esgotadas\n");
                } else {
                    achou = 0;
                    for (i = 0; i < 4; i++) {
                        if (avi[i] == numero) {
                            achou = 1;
                            posi = i;
                            break;
                        }
                    }
                    if (achou == 0) {
                        printf("Este aviao nao existe\n");
                    } else if (lug[posi] == 0) {
                        printf("Aviao lotado\n");
                    } else {
                        printf("Digite o nome do passageiro: ");
                        scanf("%s", nome);
                        reserva[pos_livre].num_avi = numero;
                        strcpy(reserva[pos_livre].nome, nome);
                        printf("Reserva efetuada com sucesso\n");
                        pos_livre++;
                        lug[posi]--;
                    }
                }
                break;
            case 4:
                printf("Digite o numero do aviao para consultar as reservas: ");
                scanf("%d", &numero);
                achou = 0;
                for (i = 0; i < pos_livre; i++) {
                    if (reserva[i].num_avi == numero) {
                        printf("%s\n", reserva[i].nome);
                        achou = 1;
                    }
                }
                if (achou == 0) {
                    printf("Nenhuma reserva esta cadastrada para este aviao\n");
                }
                break;
            case 5:
                printf("Digite o nome do passageiro para consultar as reservas: ");
                scanf("%s", nome);
                achou = 0;
                for (i = 0; i < pos_livre; i++) {
                    if (strcmp(reserva[i].nome, nome) == 0) {
                        printf("%d\n", reserva[i].num_avi);
                        achou = 1;
                    }
                }
                if (achou == 0) {
                    printf("Nenhuma reserva esta cadastrada para este nome\n");
                }
                break;
            case 6:
                printf("Encerrando o programa.\n");
                break;
            default:
                break;
        }
    } while (op != 6);

    return 0;
}