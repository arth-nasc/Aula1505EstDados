#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	// estudado pilhas e filas (crit�rios de restri��o)
	// prinicipais criterios de restri��o: FIFO e LIFO
	// FIFO=First in first out  (fila) || LIFO = Last in first out (pilha)
	// S�o listas onde o algoritmo de inser��o e remo��o s�o limitados 
	// em rela��o � uma lista. 
	// ou seja na fila a inser��o e a remo��o est�o em lados extremos 
	// ao outro. O que dita o que � uma fila ou pilha � a organiza��o da
	// inser��o e remo��o.
	// LSE
	
	// Inplementar uma pilha simplesmente encadeada 
	// 1- Inserir 5 elementos
	// A pilha tem uma harmoniza��o entre inser��o e remo��o.
	// Ou seja: Se inserir a esquerda, se remove a esquerda.
	// 2- Remover o 3� elemento.
	// Remo��o intermediaria: dois ponteiros, 1 aponta para o proximo e o 
	// que ser� removido � removido.
	// N�o funciona assim na pilha, necess�rio uma pilha auxiliar.
	// Apagar todo mundo para cima do terceiro e copiar (desempilhar)
	// os valores que estavam acima.
	
	struct node{
		int dado;
		struct node *prox;
	};
	struct node *lista,*q,*p,*listAux,*listAuxB;
	int sn,sn2;
	srand(time(NULL));
	lista=NULL;
	sn=0;
	while(sn<5){
		p=malloc(sizeof(struct node));
		listAux=malloc(sizeof(struct node));
		p->dado=rand()%100;
		p->prox=lista;
		lista=p;
		sn++;
		printf("%d \n",p->dado);
		listAux->dado=p->dado;
		printf("Lista aux: %d \n",listAux->dado);
	}
	// apagar 3� item
	// colocar q no come�o da lista
	// ir ate 3� item
	// deletar 3� item. Copiar da lista aux para lista.
	q=malloc(sizeof(struct node));
	q=listAux;
	while(q->prox!=NULL){
		q=q->prox;
	}
	if(q->prox=NULL){
		printf("p->next � igual a NULL!");
	}
	
	return 0;
}
