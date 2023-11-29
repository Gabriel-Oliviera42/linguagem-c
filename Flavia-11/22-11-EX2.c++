#include <iostream>
#include <string.h>
#include <Windows.h>
#include <locale>
#include "arquivo.h"

int main(void) {
    int op;
    FILE *arq;

    // Tenta abrir o arquivo "dados1.dat" em modo leitura e gravação (rb+).
    if ((arq = fopen("C:\\lin_c\\dados.txt", "rb+")) == NULL) {
        // Se a abertura falhar, tenta criar o arquivo em modo leitura e gravação (wb+).
        if ((arq = fopen("C:\\lin_c\\dados.txt", "wb+")) == NULL) {
            printf("Falha ao abrir/criar o arquivo!\n");
            return 1; // Encerra o programa com código de erro.
        }
    }

    do {
        system("CLS"); // Limpa a tela do console (pode não funcionar em todos os sistemas).
        printf("\n======= AGENDA ======= \n");
        printf("1. Cadastrar\n");
        printf("2. Consultar por codigo\n");
        printf("3. Gerar arquivo\n");
        printf("4. Excluir registro\n");
        printf("5. Sair\n");
        printf("=========== Contatos:%d=\n", tamanho(arq));
        printf("Opcao:");
        scanf("%d", &op);

        switch (op) {
            case 1:
                cadastrar(arq);
                break;
            case 2:
                consultar(arq);
                break;
            case 3:
                gerar_arq_txt(arq);
                break;
            case 4:
                excluir(arq);
                break;
            case 5:
                fclose(arq); // Fecha o arquivo.
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

        getchar(); // Aguarda a entrada do usuário antes de limpar a tela.

    } while (op != 5);

    return 0; // Programa encerrado com sucesso.
}
