#include <stdio.h>
#include <string.h>

int main() {
    char continuar[2];
    double altura, comprimento, area_total = 0.0;

    do {
        printf("Digite a altura do cômodo: ");
        scanf("%lf", &altura);

        printf("Digite o comprimento do cômodo: ");
        scanf("%lf", &comprimento);

        double area_comodo = altura * comprimento;
        area_total += area_comodo;

        printf("Área do cômodo: %.2lf\n", area_comodo);

        printf("Deseja continuar? (S/N): ");
        scanf("%1s", continuar);
    } while (strcmp(continuar, "S") == 0 || strcmp(continuar, "s") == 0);

    printf("Área total da residência: %.2lf\n", area_total);

    return 0;
}

