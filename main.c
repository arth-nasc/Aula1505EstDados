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
	struct node *lista,*q,*p,*listAux,*temp;
	int sn,sn2,count=0;
	srand(time(NULL));
	lista=NULL;
	sn=0;
	while(sn<5){ // Insercao a esquerda, com lista auxiliar...
		p=malloc(sizeof(struct node));
		//listAux=malloc(sizeof(struct node));
        if (lista == NULL) {
            p->dado=rand()%100;
            p->prox=lista;
            lista=p;
        } else{
        p->dado=rand()%100;
		p->prox=NULL;
		q = lista;
        while (q->prox != NULL) {
            q = q->prox;
        }
        // Insere o novo nó à direita
        q->prox = p;


        }

		sn++;
		printf("Lista principal: %d \n",p->dado);
		//listAux->dado=p->dado;
	}
	//Melhor assim
	listAux = malloc(sizeof(struct node));
    listAux->dado = lista->prox->prox->prox->dado; // Quarto elemento
    printf("%d",listAux->dado);
    listAux->prox = malloc(sizeof(struct node));
    listAux->prox->dado = lista->prox->prox->prox->prox->dado; // Quinto elemento
    listAux->prox->prox = NULL;
    printf("%d",listAux->prox->dado);

	// apagar 3º item
	// colocar q no começo da lista
	// ir ate 3º item
	// deletar 3º item. Copiar da lista aux para lista.
	temp = lista->prox->prox;

    // Atualiza o ponteiro do segundo elemento para apontar para o quarto elemento
    lista->prox->prox = lista->prox->prox->prox;

    // Libera a memória do terceiro elemento e de todos os seguintes
    while (temp != NULL) {
        q = temp;
        temp = temp->prox;
        free(q);
    }
    
    struct node *atual = lista;
    printf("Elementos da lista:\n");
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
	return 0;
}
