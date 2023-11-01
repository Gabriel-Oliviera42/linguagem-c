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
    char nome[30];       //|   num  | 4 bytes| Número do avião
};                       //|  nome  |30 bytes| Nome do passageiro, com no máximo 30 caracteres
                         //+--------+--------+ 


int main() {
    struct Reservas reserva[60];   // Inicializa a estrutura para armazenar até 60 reservas
    int avi[4] = {0, 0, 0, 0};     // Inicializa um vetor para armazenar os números dos aviões
    int lug[4] = {0, 0, 0, 0};     // Inicializa um vetor para armazenar os lugares disponíveis em cada avião
    int i;                         // Variável de iteração
    int op;                        // Variável para armazenar a opção do menu selecionada
    int pos_livre = 0;             // Contador para rastrear as posições livres no vetor de reservas
    int achou;                     // Variável para verificar se um avião específico foi encontrado
    int numero;                    // Variável para armazenar o número do avião
    int posi;                      // Variável para armazenar a posição do avião no vetor
    char nome[30];                 // Variável para armazenar o nome do passageiro
 
    for (i = 0; i < 60; i++) { // Inicializa as estruturas de dados com valores iniciais
        reserva[i].num_avi = 0;          // Inicializa os números dos aviões como 0
        strcpy(reserva[i].nome, "");     // Inicializa os nomes dos passageiros como strings vazias
    }

    do {
        printf("----------------------------------------------------------------\n");
        printf("Menu de Opcoes\n"); 
        printf("1 - Cadastrar o numero dos avioes.\n");                            
        printf("2 - Cadastrar o numero de lugares disponiveis em cada aviao\n");   
        printf("3 - Reservar passagem.\n");                                        
        printf("4 - Consultar por aviao.\n");
        printf("5 - Consultar por passageiro.\n");
        printf("6 - Finalizar.\n");
        printf("Digite sua opcao: ");
        scanf("%d", &op);
        printf("----------------------------------------------------------------\n");

        switch (op) {

            // --------- caso 1 - Cadastrar o número dos aviões -----------

            case 1:
                for (i = 0; i < 4; i++) {
                    printf("Digite o %d* Aviao: ", i + 1);
                    scanf("%d", &avi[i]);  // Armazena os números dos aviões
                }
                break;

            // --------- caso 2 - lugares disponiveis em cada avião -----------
        
            case 2:
                for (i = 0; i < 4; i++) {
                    printf("Digite o número de lugares disponíveis no %d* aviao: ", i + 1);
                    scanf("%d", &lug[i]);  // Armazena os lugares disponíveis em cada avião
                }
                break;

            // ----------------- caso 3 - Reservar passagem -------------------

            case 3:
                printf("Digite o numero do aviao no qual deseja efetuar a reserva: ");
                scanf("%d", &numero);   // Lê o número do avião fornecido pelo usuário
                if (pos_livre >= 60) {  // Mensagem se o número máximo de reservas for atingido
                    printf("Reservas em todos os avioes esgotadas\n");
                } else {
                    achou = 0;
                    for (i = 0; i < 4; i++) {
                        if (avi[i] == numero) {  // Verifica se o avião existe
                            achou = 1;
                            posi = i;            // Armazena a posição do avião no vetor
                            break;               // Para de fazer o for se achar 
                        }
                    }
                    if (achou == 0) {  // Mensagem se o avião não for encontrado
                        printf("Este aviao nao existe\n");
                    } else if (lug[posi] == 0) {  // Mensagem se o avião estiver lotado
                        printf("Aviao lotado\n");
                    } else {
                        printf("Digite o nome do passageiro: ");
                        scanf("%s", nome); // Lê o nome do passageiro
                        reserva[pos_livre].num_avi = numero;  // Armazena o número do avião na reserva
                        strcpy(reserva[pos_livre].nome, nome);  // Armazena o nome do passageiro na reserva
                        printf("Reserva efetuada com sucesso\n");  // Confirmação da reserva bem-sucedida
                        pos_livre++; // Incrementa a posição livre no vetor de reservas
                        lug[posi]--; // Decrementa os lugares disponíveis no avião
                    }
                }
                break;

            // ----------------- caso 4 - Consultar por avião -------------------

            case 4:
                printf("Digite o numero do aviao para consultar as reservas: ");
                scanf("%d", &numero);  // Lê o número do avião fornecido pelo usuário
                achou = 0;
                for (i = 0; i < pos_livre; i++) {
                    if (reserva[i].num_avi == numero) {
                        printf("%s\n", reserva[i].nome);  // Imprime o nome do passageiro para reservas no avião fornecido
                        achou = 1;
                    }
                }
                if (achou == 0) {
                    printf("Nenhuma reserva esta cadastrada para este aviao\n");  // Mensagem se não houver reservas para o avião
                }
                break;
            case 5:
                printf("Digite o nome do passageiro para consultar as reservas: ");
                scanf("%s", nome);  // Lê o nome do passageiro fornecido pelo usuário
                achou = 0;
                for (i = 0; i < pos_livre; i++) {
                    if (strcmp(reserva[i].nome, nome) == 0) {
                        printf("%d\n", reserva[i].num_avi);  // Imprime o número do avião para reservas no nome do passageiro fornecido
                        achou = 1;
                    }
                }
                if (achou == 0) {
                    printf("Nenhuma reserva esta cadastrada para este nome\n");  // Mensagem se não houver reservas para o passageiro
                }
                break;
            case 6:
                printf("Encerrando o programa...\n");  // Mensagem de encerramento do programa
                printf("Obrigado por usar\n");
                break;
            default:
                break;
        }
    } while (op != 6);  // Repete o loop até que o usuário selecione a opção 6 (Finalizar)

    return 0;
}