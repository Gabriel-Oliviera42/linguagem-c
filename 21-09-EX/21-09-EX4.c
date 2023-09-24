/*

- Faça um programa que receba:

Um vetor com o nome de cinco cidades diferentes.

Uma matriz 5 x 5 com a distância entre as cidades, sendo que na diagonal
principal deve ser colocada automaticamente distância zero, ou seja, não deve
ser permitida a digitação.

- Calcule e mostre:

Os percursos que não ultrapassam 250 quilômetros (os percursos são compostos
pelos nomes das cidades de origem e pelos nomes das cidades de destino);

O consumo de um veículo, ou seja, quantos quilômetros o veículo faz por litro
de combustível e mostre um relatório com a quantidade de combustível
necessária para percorrer cada percurso citando o mesmo (nome da cidade de
origem e nome da cidade de destino);

A maior distância e em que percurso se encontra (nome da cidade de origem e
nome da cidade de destino).

   A   B   C   D   E    
A  0  250 100 300 200
B 250  0  360  75  80
C 100 360  0  250 800
D 300  75 250  0  530
E 200  80 800 530  0

*/

#include <stdio.h>
#include <string.h>

int main() {
    // Declarando um vetor de strings para armazenar nomes de cidades
    char cidades[5][30]; // Suponhamos que o nome de cada cidade tenha no máximo 30 caracteres

    // Preenchendo o vetor com nomes de cidades
    strcpy(cidades[0], "Nova York"); // A
    strcpy(cidades[1], "Paris");     // B
    strcpy(cidades[2], "Tóquio");    // C
    strcpy(cidades[3], "Londres");   // D
    strcpy(cidades[4], "Roma");      // E
    
    int distancias[5][5] = {
        {0, -1, -1, -1, -1},  // Cidade 1
        {-1, 0, -1, -1, -1},  // Cidade 2
        {-1, -1, 0, -1, -1},  // Cidade 3
        {-1, -1, -1, 0, -1},  // Cidade 4
        {-1, -1, -1, -1, 0}   // Cidade 5
    };

    int i, j;  

    // Imprimindo a matriz de distâncias
    printf("Matriz de Distâncias:\n");
    for (i = 0; i < 5; i++) {
        for (j = i; j < 5; j++) {
            if (distancias[i][j] == -1) {
                printf("distancia de %d ate %d", i, j); 
                scanf("%d",distancias[i][j],distancias[j][i]);
            } else {
                printf("%d ", distancias[i][j]);
            }
        }
        printf("\n");
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
                printf("%d ", distancias[i][j]); 
        }
        printf("\n");
    }

    // Imprimindo os nomes das cidades
    for (i = 0; i < 5; i++) {
        printf("Cidade %d: %s\n", i + 1, cidades[i]);
    }

    return 0;
}
