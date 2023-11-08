#include <iostream>

int main() {             // Função principal do programa.
    FILE *p;             // Declara um ponteiro para um arquivo.
    char nome[30];          // Declara uma variável do tipo caractere.

    p = fopen("C:\\lin_c\\caract.txt", "w"); // Abre o arquivo em modo de adição.

    if (p == NULL) // Verifica se houve erro na abertura do arquivo.
        printf("\nErro na abertura"); // Imprime uma mensagem de erro caso não seja possível abrir o arquivo.
    else { // Caso contrário, se o arquivo foi aberto com sucesso:
        printf("Digite um nome: ");
        gets(nome);
        fputs(nome,p);
    }

    fclose(p); // Fecha o arquivo.
    system("pause");
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
