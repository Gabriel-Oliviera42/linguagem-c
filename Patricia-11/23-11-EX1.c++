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

#include <cstdio>

int main() {

    double notas[3] = {7.50, 8.30, 10.00};

    // ----- Calcular a média das notas -----
    double media = 0.0;
    for (int i = 0; i < 3; ++i) {
        media += notas[i];
    }
    media /= 3;

    // ----- Apresentar a média inicial ----- 
    printf("Notas iniciais: ");
    for (int i = 0; i < 3; ++i) {
        printf("%.2f ", notas[i]);
    }
    printf("\nMedia inicial: %.2f\n", media);

    // Pedir ao usuário o índice da nota a ser substituída
    int indiceSubstituir; // variavel do lugar que vai ser substituido
    printf("Digite o indice (0, 1 ou 2) da nota que deseja substituir: ");
    scanf("%d", &indiceSubstituir);

    // Verificar se o índice é válido
    if (indiceSubstituir >= 0 && indiceSubstituir < 3) {
        // Pedir ao usuário a nova nota
        double novaNota;
        printf("Digite a nova nota: ");
        scanf("%lf", &novaNota);

        // Substituir a nota no índice especificado
        notas[indiceSubstituir] = novaNota;

        // Recalcular a média após a alteração
        media = 0.0;
        for (int i = 0; i < 3; ++i) {
            media += notas[i];
        }
        media /= 3;

        // Apresentar o array e a média após a alteração
        printf("\nNotas alteradas: ");
        for (int i = 0; i < 3; ++i) {
            printf("%.2f ", notas[i]);
        }
        printf("\nMedia recalculada: %.2f\n", media);
    } else {
        printf("Indice invalido. Programa encerrado.\n");
    }

    return 0;
}
