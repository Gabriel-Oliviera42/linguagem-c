#include <iostream>
#include <string.h>
#include <Windows.h>
#include <locale>
							   //+---------+----------+
struct reg  {                  //| Reservas|  Espaço  |
	char nome[20];	           //+---------+----------+
	char tel[20];	           //|  status |  1 byte  |
	char email[20];            //|  email  | 20 bytes |
	char status;               //|  tel    | 20 bytes |
};                             //|  nome   | 20 bytes |
							   //+---------+----------+

// ---- Função para calcular o número de registros no arquivo -----

int tamanho(FILE *arq) {
	
    fseek(arq, 0, SEEK_END);  // Move o ponteiro de posição para o final do arquivo
    int tamanhoEmBytes = ftell(arq);  // Obtém a posição atual do ponteiro (que é o tamanho total do arquivo em bytes)
    rewind(arq);  // Retorna o ponteiro para o início do arquivo

    // Retorna o número de registros (dividindo o tamanho total pelo tamanho de um registro)
    return tamanhoEmBytes / sizeof(reg);
}

// ------------- Função para cadastrar mais uma pessoa ------------

void cadastrar(FILE *arq) {
    reg contato;
    char confirma;

    contato.status = ' ';

    fflush(stdin);

    printf("Cadastrando novo registro:\n");
    printf("\nNumero do registro:%d\n", tamanho(arq) + 1);

    // Solicitar e armazenar o nome
    printf("Nome..........:");
    // Substituí gets por fgets
    fgets(contato.nome, sizeof(contato.nome), stdin);

    // Solicitar e armazenar o telefone
    printf("Telefone......:");
    fgets(contato.tel, sizeof(contato.tel), stdin);

    // Solicitar e armazenar o e-mail
    printf("e-mail........:");
    fgets(contato.email, sizeof(contato.email), stdin);

    // Solicitar confirmação do usuário
    printf("\nConfirma <s/n>:");
    fflush(stdin);
    scanf(" %c", &confirma);

    // Se o usuário confirmar (tecla 'S' ou 's')
    if (toupper(confirma) == 'S') {
        printf("\nGravando...\n\n");

        // Posicionar o ponteiro de arquivo no final e escrever o registro
        fseek(arq, 0, SEEK_END);
        fwrite(&contato, sizeof(reg), 1, arq);
    }

    // Aguardar entrada do usuário antes de continuar
    printf("Pressione Enter para continuar...");
    getchar();
}

// ---- Função para consultar um registro no arquivo por código ----

void consultar(FILE *arq) {
    reg contato;
    int nr;

    // Solicitar ao usuário o número do registro a ser consultado
    printf("\nConsulta pelo código\n");
    printf("\nInforme o Código...:");
    scanf("%d", &nr);

    // Verificar se o número do registro é válido
    if ((nr <= tamanho(arq)) && (nr > 0)) {
        // Posicionar o ponteiro de arquivo no início do registro desejado
        fseek(arq, (nr - 1) * sizeof(reg), SEEK_SET);

        // Ler o registro do arquivo binário
        fread(&contato, sizeof(reg), 1, arq);

        // Verificar se o registro está ativo (status ' ')
        if (contato.status == ' ') {
            // Exibir as informações do registro
            printf("\nNome......:%s", contato.nome);
            printf("\nTelefone..:%s", contato.tel);
            printf("\ne-mail....:%s\n\n", contato.email);
        } else {
            // Informar que o registro foi excluído
            printf("\nRegistro excluído! \n");
        }
    } else {
        // Informar que o número do registro é inválido
        printf("\nNúmero de registro inválido!\n");
    }

    // Pausar a execução do programa antes de continuar
    system("pause");
}

// ------------- Função para gerar um arquivo de texto ------------

void gerar_arq_txt(FILE *arq) {
    char nomearq[20];

    // Solicitar o nome do arquivo de texto ao usuário
    printf("Nome do arquivo texto:");
    scanf("%s", nomearq);

    // Adicionar a extensão ".txt" ao nome do arquivo
    strcat(nomearq, ".txt");

    // Tentar abrir o arquivo de texto para escrita
    FILE *arqtxt = fopen(nomearq, "w");
    
    if (!arqtxt) {
        // Se a abertura falhar, exibir mensagem de erro e pausar
        printf("Não foi possível criar esse arquivo!\n");
        system("pause");
        return;
    }

    // Escrever cabeçalho no arquivo de texto
    fprintf(arqtxt, "Nome                Telefone    E-mail                   Status\n");
    fprintf(arqtxt, "================================================================\n");

    int nr;
    reg contato;

    // Iterar sobre os registros do arquivo binário
    for (nr = 0; nr < tamanho(arq); nr++) {
        // Posicionar o ponteiro de arquivo no início do registro
        fseek(arq, nr * sizeof(reg), SEEK_SET);

        // Ler o registro do arquivo binário
        fread(&contato, sizeof(reg), 1, arq);

        // Escrever os dados no arquivo de texto formatadamente
        fprintf(arqtxt, "%-20s%-12s%-25s- %c\n", contato.nome, contato.tel, contato.email, contato.status);
    }

    // Escrever linha de separação no arquivo de texto
    fprintf(arqtxt, "================================================================\n");

    // Fechar o arquivo de texto
    fclose(arqtxt);
}

// ----------- Função para excluir um registro no arquivo ----------

void excluir(FILE *arq) {
    reg contato;
    char confirma;
    int nr;

    // Solicitar ao usuário o número do registro a ser excluído
    printf("\nInforme o código do registro para excluir\n");
    scanf("%d", &nr);

    // Verificar se o número do registro é válido
    if ((nr <= tamanho(arq)) && (nr > 0)) {
        // Posicionar o ponteiro de arquivo no início do registro desejado
        fseek(arq, (nr - 1) * sizeof(reg), SEEK_SET);

        // Ler o registro do arquivo binário
        fread(&contato, sizeof(reg), 1, arq);

        // Verificar se o registro está ativo (status ' ')
        if (contato.status == ' ') {
            // Exibir as informações do registro
            printf("\nNome......:%s", contato.nome);
            printf("\nTelefone..:%s", contato.tel);
            printf("\ne-mail....:%s\n", contato.email);
            printf("\nConfirma a exclusão: <s/n>\n");

            // Consumir o caractere de nova linha deixado pelo Enter antes da leitura do caractere
            getchar();

            // Ler a confirmação de exclusão do usuário
            scanf("%c", &confirma);

            // Se o usuário confirmar (tecla 'S' ou 's'), excluir o registro
            if (toupper(confirma) == 'S') {
                printf("\nExcluindo...\n\n");

                // Posicionar o ponteiro de arquivo no início do registro a ser excluído
                fseek(arq, (nr - 1) * sizeof(reg), SEEK_SET);

                // Marcar o registro como excluído (status '*')
                contato.status = '*';

                // Escrever o registro de volta no arquivo, marcando-o como excluído
                fwrite(&contato, sizeof(reg), 1, arq);
            }
        } else {
            // Informar que o registro está inexistente
            printf("Registro inexistente! \n");
        }
    } else {
        // Informar que o número do registro é inválido
        printf("\nNúmero de registro inválido!\n");
    }

    // Pausar a execução do programa antes de continuar
    system("pause");
}


