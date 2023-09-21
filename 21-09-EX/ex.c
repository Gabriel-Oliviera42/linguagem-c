/* 1 - Um distribuidor de refrigerantes vendeu seu produto em todo o país. Em
cada trimestre do ano passado, ele vendeu uma certa quantidade de garrafas
em cada região do Brasil. Faça um algoritmo para ler as quantidades vendidas
e escreva a quantidade total vendida em todo o país.    */

//             Norte   Nordeste   Sul   Suldeste Centro-Oeste 
//1º Trimestre  150      1150     900     1500       400
//2º Trimestre  180       980    1100     2300       650
//3º Trimestre  140      1000     950     2100       500
//4º Trimestre  210      1600    1400     2600       840

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int vendas [4][5] = {
    {150,1150,900,1500,400},
    {180,980,1100,2300,650},
    {140,1000,950,2100,500},
    {210,1600,1400,2600,840}
    };
    int i,j,soma=0;

    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
           soma += vendas[i][j] ;
        }            
    }    
    printf("%d",soma);
    return 0;
}