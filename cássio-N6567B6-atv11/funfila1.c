
void empilhar(no **topo, int numero)
{
	no *novoNo;

	// reserva mem?ria para o novo n?
	novoNo = (no *) malloc(sizeof(no));

	// guarda a informa??o no novo n?
	novoNo->valor = numero;

	// aponta o novo n? para o antigo n? ra?z
	novoNo->proximo = *topo;

	// muda o endere?o do ra?z para o novo n?
	*topo = novoNo;
}


int desempilhar(no **topo)
{
	int valorTopo;
	no *novoTopo;
	
	// se a pilha est? vazia, retorna NULL
	if (*topo==NULL) return NULL;
	
	// guarda o valor do topo
	valorTopo = (*topo)->valor;
	
	// guarda o endere?o do segundo n?
	novoTopo = (*topo)->proximo;
	
	// libera mem?ria do n? no topo
	free(*topo);
	
	// muda o topo para o segundo n?
	*topo = novoTopo;
	
	// retorna o valor que estava no topo
	return valorTopo;
}
