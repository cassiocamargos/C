void enfileirar(no **primeiro, int info)
{
	no *novoNo, *aux;
	
	novoNo = (no *) malloc(sizeof(no)); // reserva o novo n?
	novoNo->valor = info; // guarda a informa??o n?
	novoNo->proximo = NULL;
	
	aux = *primeiro;
	
	if (aux==NULL) // se a fila est? vazia
		*primeiro = novoNo; // considera o primeiro a chegar
	else
	{ // se a fila n?o esta vazia
	
		while(aux->proximo!=NULL) // procura o ultimo n?
			aux = aux->proximo;
	
		aux->proximo = novoNo; // coloca o n? depois do ?ltimo
	}
}


int desenfileirar(no **primeiro)
{
	
	int valorPrimeiro;
	no *novoPrimeiro;
	
	// se a pilha est? vazia, retorna NULL
	if (*primeiro==NULL) return NULL;
	
	valorPrimeiro = (*primeiro)->valor; // guarda o valor prim. n?
	novoPrimeiro = (*primeiro)->proximo; // guarda o end. Seg. n?
	
	free(*primeiro); // lib. Mem. do prim. n?
	
	*primeiro = novoPrimeiro; // muda prim. para seg. n?
	
	return valorPrimeiro; // retorna o valor
						 // que estava no prim. n?
}


