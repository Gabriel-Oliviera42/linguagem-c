/*

------------------------------------------------------------------

1.1 Analise a estrutura de dados esquematizada a seguir:

   A  ----->  B  ----->  C  ----->  D  ----->  E  ----->  F  

Explique por que essa estrutura: 

(a) Não é um conjunto. 
(b) Não é uma lista. 
(c)	Não é uma árvore.

------------------------------------------------------------------

1.2	Indique a estrutura de dados mais adequada para ser usada num 
programa que precisa representar:

(a) Estradasentrecidadesdeummapa. 
(b) A estrutura organizacional de uma empresa. 
(c)	A fila de impressão em um sistema operacional. 
(d) A estrutura de diretórios em um sistema operacional.

------------------------------------------------------------------

1.3	Ao ser executado, o programa a seguir exibe a palavra 
diferentes. Explique por que isso acontece.

#include <stdio.h>

int main (void) {

    char s[3] = "um";
    char t[3] = "um";

    if ( s == t) puts("iguais");

    else puts("diferentes");

    return 0;
}

------------------------------------------------------------------

1.4	Explique o que acontece quando o programa a seguir é executado. 

#include <stdio.h>

typedef struct {
    char valor[10];
} Str;

int main(void) {

    Str x = {"um"};
    Str y = {"dois"};

    puts(x.valor);
    
    x = y;

    puts(x.valor);

    return 0;
}

------------------------------------------------------------------

1.5	Explique o que acontece quando o programa a seguir é executado. 

#inclue <stdio.h>

int main(void) {

    int a = 3;
    int b = 5;

    int *p = &a;
    int *q = &b;

    *p = *p + *q; 
    *q = *p - *q; 
    *p = *p - *q;

    printf("a=%d b=%d", a, b);

    return 0;
}

------------------------------------------------------------------

1.6 Indique a forma de alocação de memória (estática sequencial, 
estática encadeada, dinâmica sequencial ou dinâmica encadeada) 
usada para armazenar os itens 1, 2, 3 e 4, em cada um dos 
programas a seguir. 

------------------------------------------------------------------

(a) 

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i;
    int *v = malloc(4*sizeof(int));

    for(i = 0; i < 4; i++) {
        v[i] = i + 1;
    }

    for(i = 0; i < 4; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}

------------------------------------------------------------------

(b) 

#include <stdio.h>

typedef struct no {
    int item;
    struct no *prox;
} No;

int main(void) {

    No v[4] = {{3,v + 3}, {1,v + 3}, {4,NULL}, {2, v + 0}};

    No *p;

    for(*p = v + 1; p != NULL; p = p-> prox) {
        printf("%d\n", p -> item);
    }

    return 0;
}

------------------------------------------------------------------

(c) 

#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int item;
    struct no *prox;
} *Lst;

Lst no(int x, Lst p) 

    Lst n = malloc(sizeof(struct no));

    n -> item = x;
    n -> prox = p;

    return n;
}

int main(void) {
    
    Lst p = no(1, no(2, no(3, no(4, NULL))));

    while(p) {
        printf("%d\n", p -> item);
        p = p -> prox;
    }

    return 0;
}

------------------------------------------------------------------

*/

/*

------------------------------------------------------------------

1.1
(a) Não é um conjunto, pois um conjunto não permite repetições, 
e nessa estrutura pode haver repetições de elementos.

(b) Não é uma lista, pois uma lista geralmente tem uma estrutura 
bem definida, como lista encadeada ou lista duplamente encadeada.

(c) Não é uma árvore, pois na estrutura não existe um conceito 
de hierarquia ou ordenação entre os elementos.

------------------------------------------------------------------

1.2
(a) Estradas entre cidades de um mapa podem ser representadas 
por um grafo.

(b) A estrutura organizacional de uma empresa pode ser 
representada por uma árvore.

(c) A fila de impressão em um sistema operacional pode ser 
representada por uma fila (FIFO - first in, first out).

(d) A estrutura de diretórios em um sistema operacional 
pode ser representada por uma árvore.

------------------------------------------------------------------

1.3

O programa exibe "diferentes" porque a comparação s == t está 
comparando os endereços de memória dos dois arrays e não seus 
conteúdos. Para comparar o conteúdo de duas strings em C, você 
deve usar a função strcmp().

------------------------------------------------------------------

1.4

O programa primeiro imprime "um" e depois "dois". A operação x = y; 
copia o conteúdo de y para x, substituindo assim o valor original 
de x por "dois".

------------------------------------------------------------------

1.5

O programa troca os valores de a e b sem usar uma variável 
temporária. Isso é feito usando aritmética de ponteiros. No 
final, o programa imprimirá "a=5 b=3".

------------------------------------------------------------------

1.6

(a) Alocação de memória dinâmica sequencial.

(b) Alocação de memória estática encadeada.

(c) Alocação de memória dinâmica encadeada.

------------------------------------------------------------------
*/
