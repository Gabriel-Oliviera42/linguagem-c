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