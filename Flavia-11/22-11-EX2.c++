#include <iostream>
#include <string.h>
#include <Windows.h>
#include <locale>
#include "arquivo.h"

void cadastrar(FILE *arq) {
    reg contato;   // Estrutura para armazenar informações do contato
    char confirma;  // Variável para armazenar a confirmação do usuário

    contato.status = ' ';  // Inicializa o status do contato como espaço em branco

    printf("Cadastrando novo registro:\n");
    printf("\nNumero do registro: %d\n", tamanho(arq) + 1);

    // Limpar o buffer de entrada antes de ler a string
    while (getchar() != '\n'); // Loop para consumir caracteres até encontrar uma nova linha (limpar o buffer)

    printf("Nome..........:");
    fgets(contato.nome, sizeof(contato.nome), stdin);  // Lê o nome

    printf("Telefone......:");
    fgets(contato.tel, sizeof(contato.tel), stdin);   // Lê o telefone 

    printf("E-mail........:");
    fgets(contato.email, sizeof(contato.email), stdin);  // Lê o e-mail 

    printf("\nConfirma <s/n>: ");
    scanf(" %c", &confirma);  // Lê a confirmação do usuário (o espaço antes de %c consome espaços em branco)

    if (toupper(confirma) == 'S') {
        printf("\nGravando...\n\n");
        fseek(arq, 0, SEEK_END);
        fwrite(&contato, sizeof(reg), 1, arq);  // Grava o contato no final do arquivo
    }

    getchar();  // Aguarda a entrada do usuário antes de continuar
}

void consultar(FILE *arq)
{
	reg contato;
	int nr;
	printf("\nConsulta pelo codigo\n");
	printf("\nInforme o Codigo...:");
	scanf("%d", &nr);
	if ((nr <= tamanho(arq)) && (nr>0))
	{
		fseek(arq, (nr - 1) * sizeof(reg), SEEK_SET);
		fread(&contato, sizeof(reg), 1, arq);
		if (contato.status == ' ')
		{
			printf("\nNome......:%s", contato.nome);
			printf("\nTelefone..:%s", contato.tel);
			printf("\ne-mail....:%s\n\n", contato.email);
		}

		else
			printf("\nRegistro excluido! \n");

	}
	else
	{
		printf("\nNumero de registro invalido!\n");
	}
	system("pause");
}

void geraarqtxt(FILE *arq)
{
	char nomearq[20];
	printf("Nome do arquivo texto:");
	scanf("%s", nomearq);
	strcat(nomearq, ".txt");
	FILE *arqtxt = fopen(nomearq, "w");
	if (!arqtxt)
	{
		printf("Nao foi possivel criar esse arquivo!\n");
		system("pause");
		//return;
	}
	fprintf(arqtxt, "Nome                Telefone    E-mail                   Status\n");
	fprintf(arqtxt, "================================================================\n");
	int nr;
	reg contato;
	for (nr = 0; nr<tamanho(arq); nr++)
	{
		fseek(arq, nr * sizeof(reg), SEEK_SET);
		fread(&contato, sizeof(reg), 1, arq);
		fprintf(arqtxt, "%-20s%-12s%-25s- %c\n", contato.nome, contato.tel, contato.email, contato.status);
	}
	fprintf(arqtxt, "================================================================\n");
	fclose(arqtxt);
}

void excluir(FILE *arq)
{
	reg contato;
	char confirma;
	int nr;

	printf("\nInforme o codigo do registro para excluir\n");
	scanf("%d", &nr);
	if ((nr <= tamanho(arq)) && (nr>0))
	{
		fseek(arq, (nr - 1) * sizeof(reg), SEEK_SET);
		fread(&contato, sizeof(reg), 1, arq);
		if (contato.status == ' ')
		{
			printf("\nNome......:%s", contato.nome);
			printf("\nTelefone..:%s", contato.tel);
			printf("\ne-mail....:%s\n", contato.email);
			printf("\nConfirma a exclusao: <s/n>\n");
			getchar();
			scanf("%c", &confirma);

			if (toupper(confirma) == 'S')
			{
				printf("\nexcluindo...\n\n");
				fseek(arq, (nr - 1) * sizeof(reg), SEEK_SET);
				contato.status = '*';
				fwrite(&contato, sizeof(reg), 1, arq);
			}
		}
	else
		printf("Registro inexistente! \n");
	}
	else
	{
		printf("\nNumero de registro invalido!\n");
	}
	system("pause");
}

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
                geraarqtxt(arq);
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
