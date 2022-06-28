
// Zero uma lista
void destroiLista(tipoLista *l)
{	
	if(l->prim != NULL)
	{			
		tipoNo *aux;
		aux = (tipoNo*) malloc(sizeof(tipoNo));
		aux = l->prim;
		
		while(aux != NULL)
		{
			l->prim = aux->prox;
			free(aux);
			aux = l->prim;
		}		
	}
}


//Conta a ocerrencia de um certo id
int contaK(tipoListaCircular *pLista, int k)
{	
	tipoNo *p;		
	int cont = 0;
	while(pLista->atual != NULL)
	{		
		p = pLista->atual->prox;
		while(p != pLista)
		{
			if(p->dado.id == k)
				cont++;		
			
			p = p->prox;
		}
		if(p->dado.id == k)
			cont++;
		
		removeDaListaCircular(&pLista, &p->dado.id);
		proximoDaVez(&pLista);
	}
return cont;	
}


// Para andar em uma lista 
while(aux->prox != NULL)
{
	if(aux->d >= aux->prox->d)
		return 0;				
	
	aux = aux->prox;
}



//Elimina de uma posição (não considera o 0)
int removeDaLista(tipoLista *l, int k)
{
	tipoNo *aux, *temp;
	int i = 1, cont = 0;
	
	for(aux = l->prim; aux !=NULL; aux = aux->prox) cont++;
		
	if(k >= cont) return 0;
	if(l->prim)
	{
		if(k == 1)
		{
			temp = l->prim;
			l->prim = temp->prox;
			free(temp);
			return 1;
		}
		else
		{			
			aux = l->prim;
			while(aux->prox)
			{
				i++;
				if(i == k)
				{
					temp = aux->prox;
					aux->prox = temp->prox;
					free(temp);
					return 1;
				}				
				aux = aux->prox;
			}
		}
	}	
return 0;
}	



void mostraQtd(FILE *arquivo)
{
	palavra p;
	
	while(fscanf(arquivo, "%[^\n]%*c", p) == 1)
	{
		strcpy(vetor, palavra);
		fscanf(arquivo, "%[^\n]%*c", palavra)
		printf("%s\n",palavra);
	}
		
}


void RemoveElemento(TipoLista *plista, char *nome)
{
	tipoNo *aux, *temp;
	aux = plista->prim;
	while(aux)
	{
		if(!strcmp(nome,plista->prim->next.rep))
		{
			temp = plista->prim;
			plista->prim = temp->prox;
			free(temp);
		}
		aux = aux->prox;
	}	
}

float novaSalario(tipoDados *data)
{
	float novo_salario;
	//printf("Salario 1: %.2f //", data->salario);
	novo_salario = data->salario * 1.1;
	//printf("Salario 2: %.2f //", novo_salario);
	data->salario = novo_salario;
	//printf("Salario 2.5: %.2f ", data->salario);
	return novo_salario;
}