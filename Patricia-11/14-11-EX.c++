/*

Como você faria para armazenar os valores e os naipes das cartas?

usaria uma matriz [4][13]

Como você armazenaria a sequência das cartas em cada uma das pilhas?

faria um gerador de numeros aleatorios para percorrer toda a matriz e 
depois faria um for para colocar nas pilhas de de 7 cartas e outro para
colocar nas de 6 cartas

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffleMatrix(int matrix[4][13], int rows, int cols) {
    // Inicializa a semente para a função rand()
    srand((unsigned int)time(NULL));

    // Embaralha os elementos da matriz
    for (int i = rows - 1; i > 0; --i) {
        for (int j = cols - 1; j > 0; --j) {
            // Gera um índice aleatório entre 0 e i (inclusive)
            int randRow = rand() % (i + 1);
            int randCol = rand() % (j + 1);

            // Troca os elementos nas posições [i][j] e [randRow][randCol]
            int temp = matrix[i][j];
            matrix[i][j] = matrix[randRow][randCol];
            matrix[randRow][randCol] = temp;
        }
    }
}

int main() {
    // Defina sua matriz [4][13]
    int myMatrix[4][13] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13},
        {14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26},
        {27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39},
        {40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52}
    };

    // Embaralhe a matriz
    shuffleMatrix(myMatrix, 4, 13);

    // Exiba a matriz embaralhada
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 13; ++j) {
            printf("%3d ", myMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


Como implementaria as regras que restringem a movimentação de cartas?

Qual seria a melhor estratégia para representar, armazenar e manipular as
informações referentes a essas pilhas de cartas, dentro de seu programa?

apenas colocaria para melhorar a visão do usuario


*/