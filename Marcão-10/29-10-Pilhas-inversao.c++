#include <iostream>
#include "Pilha.h"

int main(void) { 

    char c[81]; 
    Pilha P = pilha(81); 

    printf("Cadeia? "); 
    gets(c); 

    for(int i=0; c[i]; i++) {
        push(c[i],P); 
    }

    printf("Inverso: "); 

    while( !vaziap(P) ) {
        printf("%c", pop(P)); 
    }
    destroip(&P);

    return 0;
}

