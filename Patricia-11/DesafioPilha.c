/*Inserir um novo livro na pilha*/
void inserir() {
	int continuar;
	do {
	cabec();
	printf (“\nColocar livro no topo da pilha  \n”);
	printf(“\nCodigo do livro:     “);
	scanf(“%d”  , &||.codigo);
	printf(“\nTitulo do Livro:   “);
	fflush (stdin);
	gets(||.titulo);

	// Inserir Livro na pilha
	if (tampilha <30) { /*Se ainda tem vaga na pilha */
	livro[tampilha] = ||;
	tampilha ++;

	printf( “\n\nInserido com Sucesso!! \n\n”);
	}
	else /* Pilha cheia*/
		printf (“\n\nPilha cheia, Livro não foi inserido !! \n\n”);
		printf(“\n Continuar inserindo (1-Sim/2-Não)? “);
		scanf (“%d”, &continuar);
	}while (continuar == 1)// Verificar se gostaria de continuar inserindo livros
}
