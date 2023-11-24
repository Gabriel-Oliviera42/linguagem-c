/*
Uma lista dinâmica com encadeamento duplo é um conjunto de elementos ligados
em sequência, no qual os elementos estão encadeados de modo que cada um aponte
para o próximo e para o anterior, formando, assim, uma cadeia de dois sentidos.
Nesse tipo de lista, o anterior do primeiro elemento e o posterior do último apontam
para NULL, indicando o início e o final da lista, respectivamente. Diversas operações
podem ser implementadas, sendo as mais comuns: a inclusão, a exclusão e a
impressão.
Com base nisso, sua tarefa, neste desafio, é declarar uma lista dinâmica
duplamente encadeada e implementar os seguintes métodos na linguagem C:

- Inicializar a lista;
- Inserir elemento no início;
- Inserir elemento no final;
- Excluir elemento do meio da lista;
- Imprimir a lista nos dois sentidos;
- Excluir toda a lista.

Use como base da lista uma estrutura com os seguintes atributos: 
nome, nota e turma, conforme segue:

typedef struct {
char nome[20];
float nota;
int turma;
} Aluno;

Após implementar a lista e os métodos, faça algumas operações de inserção e
exclusão para testar as funcionalidades do exercício e apresente o resultado da tela.
O principal método desse exercício é o que exclui elementos do meio da lista, sendo
que os outros servirão de apoio para o desenvolvimento deste.

*/