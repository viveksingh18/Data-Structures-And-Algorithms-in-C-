//deleting linked list
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct node{
	int data;
	struct node *ptr;
};

void deleting(struct node **head){
	struct node *aux,*iterator;
	iterator=*head;
	while(iterator){
		aux=iterator->ptr;
		free(iterator);
		iterator=aux;
	}
	*head=NULL;
}
int main(){
	return 0;
}
