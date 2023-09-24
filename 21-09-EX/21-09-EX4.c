#include <stdio.h>
#include <string.h>

#define NUM_CIDADES 5

int main() {
    char cidades[NUM_CIDADES][50];
    float distancia[NUM_CIDADES][NUM_CIDADES];
    float consumo;
    
    // Leitura dos nomes das cidades
    printf("Digite os nomes das cinco cidades diferentes:\n");
    for (int i = 0; i < NUM_CIDADES; i++) {
        printf("Cidade %d: ", i + 1);
        scanf("%s", cidades[i]);
    }
    
    // Inicialização da diagonal principal da matriz de distâncias com 0
    for (int i = 0; i < NUM_CIDADES; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            if (i == j) {
                distancia[i][j] = 0;
            } else {
                printf("Digite a distância entre %s e %s: ", cidades[i], cidades[j]);
                scanf("%f", &distancia[i][j]);
            }
        }
    }
    
    // Leitura do consumo de combustível
    printf("Digite o consumo de combustível em quilômetros por litro: ");
    scanf("%f", &consumo);
    
    // Cálculo dos percursos que não ultrapassam 250 quilômetros
    printf("\nPercursos que não ultrapassam 250 quilômetros:\n");
    for (int i = 0; i < NUM_CIDADES; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            if (distancia[i][j] <= 250) {
                printf("%s -> %s\n", cidades[i], cidades[j]);
            }
        }
    }
    
    // Cálculo de todos os percursos e quantidade de combustível necessária
    printf("\nTodos os percursos e quantidade de combustível necessária:\n");
    for (int i = 0; i < NUM_CIDADES; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            if (i != j) {
                float combustivel_necessario = distancia[i][j] / consumo;
                printf("%s -> %s: %.2f litros\n", cidades[i], cidades[j], combustivel_necessario);
            }
        }
    }
    
    return 0;
}
