#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

int main(){
	struct Node *head = NULL;//Nao existe nó criado, head deverá apontar p nó
	struct Node *no=(struct Node *) malloc(sizeof(struct Node));
	int valor;
	
	printf("Digite algum valor: ");
	scanf("%d",&valor);
	no->data=valor;
	no->next=head;
	head=no;
	
	printf("%d ",no->data);	
	printf("%d ",no->next);	
	return (0);
	}
