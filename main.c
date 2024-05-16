#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	// estudado pilhas e filas (critérios de restrição)
	// prinicipais criterios de restrição: FIFO e LIFO
	// FIFO=First in first out  (fila) || LIFO = Last in first out (pilha)
	// São listas onde o algoritmo de inserção e remoção são limitados 
	// em relação à uma lista. 
	// ou seja na fila a inserção e a remoção estão em lados extremos 
	// ao outro. O que dita o que é uma fila ou pilha é a organização da
	// inserção e remoção.
	// LSE
	
	// Inplementar uma pilha simplesmente encadeada 
	// 1- Inserir 5 elementos
	// A pilha tem uma harmonização entre inserção e remoção.
	// Ou seja: Se inserir a esquerda, se remove a esquerda.
	// 2- Remover o 3º elemento.
	// Remoção intermediaria: dois ponteiros, 1 aponta para o proximo e o 
	// que será removido é removido.
	// Não funciona assim na pilha, necessário uma pilha auxiliar.
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
	// apagar 3º item
	// colocar q no começo da lista
	// ir ate 3º item
	// deletar 3º item. Copiar da lista aux para lista.
	// Ainda não funiciona.....
	q=malloc(sizeof(struct node));
	q=listAux;
	while(q->prox!=NULL){
		q=q->prox;
	}
	if(q->prox=NULL){
		printf("p->next é igual a NULL!");
	}
	
	return 0;
}
