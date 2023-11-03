#include <stdio.h>

int main() {

    FILE *p;        // Declarando um ponteiro para o arquivo
    int resposta;   // Declarando uma variável inteira chamada resposta

    p = fopen("arquivo.txt", "w");

    if (p == NULL)  // Verificando se a abertura do arquivo foi bem-sucedida
        printf("\nErro na abertura"); 
    else {
        printf("\nSucesso na abertura");
        resposta = fclose(p);   // Atribuindo o resultado da função fclose à variável respost

        if (resposta == 0)      // Verificando se o fechamento do arquivo foi bem-sucedido
            printf("\nSucesso no fechamento");
        else 
            printf("\nErro no fechamento");
    }
    return 0;
}
