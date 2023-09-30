//Passagem de Parâmetro por Valor e por Referência

#include <stdio.h>

// Função que retorna o quadrado de um número (passagem por valor)
int quadrado(int num) {
    return num * num;
}

// Função que calcula a média dos valores de um vetor (passagem por referência)
void calcularMedia(int vetor[], int tamanho, double *media) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    *media = (double)soma / tamanho;
}

int main() {
    int num = 5;
    int resultado = quadrado(num);
    printf("O quadrado de %d é %d\n", num, resultado);

    int numeros[] = {10, 20, 30, 40, 50};
    int tamanho = 5;
    double media;
    calcularMedia(numeros, tamanho, &media);
    printf("A média dos valores é %.2lf\n", media);

    return 0;
}
