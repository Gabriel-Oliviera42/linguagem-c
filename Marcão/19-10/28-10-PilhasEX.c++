/*
2.1 Qual a saída exibida pelo programa a seguir? Por quê? 

#include <stdio.h> 
#include "../ed/pilha.h" // pilha de int 

int main(void) {

    Pilha P = pilha(3); 

    empilha(1,P); 
    empilha(2,P); 
    
    printf("%d\n",desempilha(P)); 
    printf("%d\n",desempilha(P)); 
    printf("%d\n",desempilha(P)); 
    
    return 0;
}

2.2 Qual a saída exibida pelo programa a seguir? Por quê? 

#include <stdio.h> 
#include "../ed/pilha.h" // pilha de float

int main(void) {

    Pilha P = pilha(100); 
    empilha(8,P); 
    
    while( topo(P)>0 ) {
        empilha(topo(P)/2,P); 
    }

    while( !vaziap(P) ) { 
        printf("%f\n",desempilha(P)); 
    }

    return 0;
}

2.3	Usando pilha, crie um programa para inverter a ordem 
das letras nas palavras de uma frase digitada pelo usuário. 
Por exemplo, se for digitada a frase "apenas um teste", 
o pro- grama deverá exibir a frase "sanepa mu etset"

2.5	Usando pilha, crie uma função para verificar se uma 
expressão composta apenas por cha- ves, colchetes e parênteses, 
representada por uma cadeia, está ou não balanceada. Por exemplo, 
as expressões "[{()()}{}]" e "{[([{}])]}" estão balanceadas, mas 
as expressões "{[(}])" e "{[)()(]}" não estão.

2.6	Supondo que o usuário digite as cadeias "um", "dois" e "tres", qual 
será a saída exi-bida pelo programa a seguir? Por quê?

#include <stdio.h> 
#include "../ed/pilha.h" // pilha de char * 

int main(void) {

    Pilha P = pilha(5); 
    char s[11]; 
    
    for(int i=1; i<=3; i++) { 
        printf("? "); 
        gets(s); 
        empilha(s,P); 
    } 
    
    while( !vaziap(P) ) {
        puts(desempilha(P)); 
    }

    return 0;
}

2.7	Usando a função _strdup(s), declarada em string.h, corrija o 
programa do exercício anterior. Essa função copia a cadeia s para 
uma área de memória, alocada dinamicamente pela função malloc(), 
e devolve o endereço dessa área. Depois de usada, essa cópia pode 
ser destruída com a função free().


*/