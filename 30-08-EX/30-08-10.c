#define _CRT_SECURY_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
void main()
{
// A variável texto1 é inicializada com a cadeia
// de caracteres PROGRAMA DE COMPUTADOR
char texto1[] = "PROGRAMA DE COMPUTADOR";
char texto2[35];
// A linha abaixo inicializa a variável texto2
// com vazio, ou seja, uma cadeia com tamanho zero
texto2[0] = '\0';
// A linha abaixo copia o conteúdo da variável
// texto1 para a variável texto2
strcpy_s(texto2, texto1);
// A linha abaixo inseri a cadeia ES e o finalizador
// de strings na cadeia texto2
strcat_s(texto2, "ES\0");
// A linha abaixo mostra a nova cadeia gerada
printf("\nNova cadeia de caracteres = %s\n", texto2);
system("pause");
}