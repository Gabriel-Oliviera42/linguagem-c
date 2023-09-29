#include <stdio.h>
#include <string.h>

// Função para calcular o consumo de combustível
void calcularConsumo(float *consumo, float distancia) {
    *consumo = distancia / 10.0; // Supomos que o consumo é de 10.0 km por litro
}

int main() {
    char cidades[5][30], cidade_origem[30], cidade_destino[30]; // Supondo que o nome de cada cidade tenha até 30 caracteres

    int i, j;  

    // Consumo do veiculo em quilometros por litro
    float combustivel_necessario, distancia;
    double maior_distancia = 0;

    // Preenchendo o vetor com nomes de cidades
    strcpy(cidades[0], "Areado");      // 0
    strcpy(cidades[1], "Alfenas");     // 1
    strcpy(cidades[2], "Alterosa");    // 2
    strcpy(cidades[3], "Machado");     // 3
    strcpy(cidades[4], "Divisa Nova"); // 4

    // Solicitando ao usuário as cidades de origem e destino
    printf("Digite a cidade de origem: ");
    scanf("%s", cidade_origem);

    printf("Digite a cidade de destino: ");
    scanf("%s", cidade_destino);

    // Aqui você precisaria implementar a lógica para encontrar a distância entre as cidades

    // Chamando a função para calcular o consumo
    calcularConsumo(&combustivel_necessario, distancia);

    // Exibindo o resultado
    printf("O consumo de combustível entre %s e %s é %.2f litros\n", cidade_origem, cidade_destino, combustivel_necessario);

    return 0;
}
