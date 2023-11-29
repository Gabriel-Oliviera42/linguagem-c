/*
As listas sequenciais são utilizadas, preferencialmente, quando é necessário
manipular listas pequenas, quando se pode limitar o seu tamanho e quando a inserção
e a remoção de um elemento puderem ser realizadas por meio da utilização da última
posição.
Nesse sentido, aplicações que manipulem listas, como a escalação de um time
de futebol, os alunos de uma determinada disciplina, os funcionários de um setor,
entre tantas outras que se encaixem nesses critérios, consistem em boas aplicações
para listas sequenciais.
Agora, você precisa elaborar um programa que preencha uma lista com as 3
notas de um aluno, previamente informadas pelo seu professor, e calcule a média
dessas notas, a ser inserida ao final da lista.

- As notas devem ser as seguintes: 7.50, 8.30 e 10.00, portanto a média das notas
deverá ser 8.60.

- Ao final, apresente a lista com as notas inseridas e a média calculada.

- Depois disso, o professor deseja alterar a nota 2 para 8.50, o que vai fazer com que
a média das notas fique em 8.67.

- Apresente, novamente, a lista com as novas notas e a média recalculada.
    
*/

#include <stdio.h>

// Função para calcular a média de uma lista de notas
float calcular_media(float notas[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}

int main() {
    // Notas iniciais
    float notas_aluno[3] = {7.50, 8.30, 10.00};

    // Calcula a média inicial
    float media_inicial = calcular_media(notas_aluno, 3);

    // Apresenta a lista e a média inicial
    printf("Notas iniciais: %.2f, %.2f, %.2f\n", notas_aluno[0], notas_aluno[1], notas_aluno[2]);
    printf("Média inicial: %.2f\n", media_inicial);

    // Insere a média no final da lista
    notas_aluno[3] = media_inicial;

    // Apresenta a lista com a média inserida
    printf("\nLista com a média inserida: %.2f, %.2f, %.2f, %.2f\n", notas_aluno[0], notas_aluno[1], notas_aluno[2], notas_aluno[3]);

    // Altera a segunda nota para 8.50
    notas_aluno[1] = 8.50;

    // Recalcula a média
    float nova_media = calcular_media(notas_aluno, 3);

    // Apresenta a lista com a nota alterada e a nova média
    printf("\nLista com a nota alterada: %.2f, %.2f, %.2f, %.2f\n", notas_aluno[0], notas_aluno[1], notas_aluno[2], notas_aluno[3]);
    printf("Nova média: %.2f\n", nova_media);

    return 0;
}