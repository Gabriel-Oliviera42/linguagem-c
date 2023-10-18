#include <stdio.h>
#include <stdlib.h>

int escolha;
int r[5];

void somar(int vet1[5], int vet2[5]) {
    int i;
    for(i = 0; i < 5; i++) {
        r[i] = vet1[i] + vet2[i];
    }
}

void subtrair(int vet1[5], int vet2[5]) {
    int i;
    for(i = 0; i < 5; i++) {
        r[i] = vet1[i] - vet2[i];
    }
}

void multiplicar(int vet1[5], int vet2[5]) {
    int i;
    for(i = 0; i < 5; i++) {
        r[i] = vet1[i] * vet2[i];
    }
}

void dividir(int vet1[5], int vet2[5]) {
    int i;
    for(i = 0; i < 5; i++) {
        r[i] = vet1[i] / vet2[i];
    }
}

int main(void){
  
    int i;
    int vet1[5];
    int vet2[5];
  
    while (escolha != 5)
    {
        printf("\nEscolha uma das opicaes abaixo:\n");
      
        printf("\n1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("\nQual opicao voce vai usar: ");
        scanf("%i", &escolha);
        switch (escolha)
        {
        case 1:
            for(i = 0; i < 5; i++) {
                printf("\ndigite os numeros que vão ser somados\n\n");
                printf("digite o %i numero do primeiro vetor: ",i+1);
                scanf("%i", &vet1[i]);
                printf("digite o %i numero do segundo vetor: ",i+1);
                scanf("%i", &vet2[i]);
            }
            somar(vet1, vet2);
            printf("\n");
            for(i = 0; i < 5; i++) {
              printf("Soma: %d\n",r[i]);
            }
            break;
        case 2:
            for(i = 0; i < 5; i++) {
                printf("\ndigite os numeros que vão ser subtraidos\n\n");
                printf("digite o %i numero do primeiro vetor: ",i+1);
                scanf("%i", &vet1[i]);
                printf("digite o %i numero do segundo vetor: ",i+1);
                scanf("%i", &vet2[i]);
            }
            subtrair(vet1, vet2);
            printf("\n");
            for(i = 0; i < 5; i++) {
              printf("Subtracao: %d\n",r[i]);
            }
          
            break;
        case 3:
            for(i = 0; i < 5; i++) {
                printf("\ndigite os numeros que vão ser subtraidos\n\n");
                printf("digite o %i numero do primeiro vetor: ",i+1);
                scanf("%i", &vet1[i]);
                printf("digite o %i numero do segundo vetor: ",i+1);
                scanf("%i", &vet2[i]);
            }
              multiplicar(vet1, vet2);
            printf("\n");
            for(i = 0; i < 5; i++) {
              printf("multiplicacao: %d\n",r[i]);
            }
            
            break;
        case 4:
            for(i = 0; i < 5; i++) {
                printf("\ndigite os numeros que vão ser subtraidos\n\n");
                printf("digite o %i numero do primeiro vetor: ",i+1);
                scanf("%i", &vet1[i]);
                printf("digite o %i numero do segundo vetor: ",i+1);
                scanf("%i", &vet2[i]);
            }
            dividir(vet1, vet2);
            printf("\n");
            for(i = 0; i < 5; i++) {
              printf("Divisao: %d\n",r[i]);
            }
            
            break;
        case 5:
            printf("\nObrigado por usar meu programa");

            break;
        default:
            printf("\nDigite um dos numeros abaixo \n");
        }
    }
    return 0;
}
