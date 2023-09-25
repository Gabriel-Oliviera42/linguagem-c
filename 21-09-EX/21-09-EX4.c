/*

- Faça um programa que receba:

Um vetor com o nome de cinco cidades diferentes.

Uma matriz 5 x 5 com a distância entre as cidades, sendo que na diagonal
principal deve ser colocada automaticamente distância zero, ou seja, não deve
ser permitida a digitação.

- Calcule e mostre:

Os percursos que não ultrapassam 250 quilômetros (os percursos são compostos
pelos nomes das cidades de origem e pelos nomes das cidades de destino); X

O consumo de um veículo, ou seja, quantos quilômetros o veículo faz por litro
de combustível e mostre um relatório com a quantidade de combustível
necessária para percorrer cada percurso citando o mesmo (nome da cidade de
origem e nome da cidade de destino); X

A maior distância e em que percurso se encontra (nome da cidade de origem e
nome da cidade de destino).

   0   1   2   3   4    
0  0  250 100 300 200
1 250  0  360  75  80
2 100 360  0  250 800
3 300  75 250  0  530
4 200  80 800 530  0

*/

#include <stdio.h>
#include <string.h>

int main() {
    char cidades[5][30], cidade_origem[30], cidade_destino[30]; // Supondo que o nome de cada cidade tenha até 30 caracteres

    int i, j;  

    // Consumo do veiculo em quilometros por litro
    float combustivel_necessario, distancia, consumo = 10.0;
    double maior_distancia = 0;

    // Preenchendo o vetor com nomes de cidades
    strcpy(cidades[0], "Areado");      // 0
    strcpy(cidades[1], "Alfenas");     // 1
    strcpy(cidades[2], "Alterosa");    // 2
    strcpy(cidades[3], "Machado");     // 3
    strcpy(cidades[4], "Divisa Nova"); // 4
    
    int distancias[5][5] = {
        {0, 250, 100, 300, 200},  // Cidade 1
        {250, 0, 360, 75, 80},    // Cidade 2
        {100, 360, 0, 250, 800},  // Cidade 3
        {300, 75, 250, 0, 530},   // Cidade 4
        {200, 80, 800, 530, 0}    // Cidade 5
    };

    /*
    int distancias[5][5] = {
        {0, 1, 1, 1, 1},  // Cidade 1
        {1, 0, 1, 1, 1},  // Cidade 2
        {1, 1, 0, 1, 1},  // Cidade 3
        {1, 1, 1, 0, 1},  // Cidade 4
        {1, 1, 1, 1, 0}   // Cidade 5
    };

    // Imprimindo a matriz de distâncias:

    printf("Matriz de Distancias:\n");
    for (i = 0; i < 5; i++) {
        for (j = i; j < 5; j++) {
            if (distancias[i][j] == 1) {
                printf("distancia de %d ate %d :", i, j); 
                scanf("%d",&distancias[i][j]);
                distancias[j][i] = distancias[i][j];
            }
        }
        printf("\n");
    }
    */

    /*  
    
    coloca na tela a matriz:

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
                printf("%d ", distancias[i][j]); 
        }
        printf("\n");
    }

    coloca os nomes das cidades:

    for (i = 0; i < 5; i++) {
        printf("Cidade %d: %s\n", i + 1, cidades[i]);
    }

    */

   for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
                if(distancias[i][j] <= 250) {
                    printf("o percurso de %d ate %d e menos de 250Km\n",i,j);
                }
        }
    }

    printf("\n\n");

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            distancia = distancias[i][j];
            combustivel_necessario = distancia / consumo;
            printf("de %s para %s: %.2f litros de combustivel necessarios.\n", cidades[i], cidades[j], combustivel_necessario);
        }
    }

    // Calcular a maior distância e registrar o percurso
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (distancias[i][j] > maior_distancia) {
                maior_distancia = distancias[i][j];
                strcpy(cidade_origem, cidades[i]);
                strcpy(cidade_destino, cidades[j]);
            }
        }
    }
    
    printf("\n\n");

    // Imprimir a maior distância e o percurso correspondente
    printf("Maior distancia: %.2lf km\n", (double)maior_distancia);
    printf("Percurso: De %s para %s\n", cidade_origem, cidade_destino);


    return 0;
}
