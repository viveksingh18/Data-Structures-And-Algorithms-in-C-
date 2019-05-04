//deletion in a linked list

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct node{
	int data;
	struct node *ptr;
};

void delete_(struct node ** head,int position){
	
	int k=1;
	struct node *q,*p,*newNode;
	p=*head;
	
	if(*head==NULL){
		cout<<"UNDERFLOW";
	}
	p=*head;
	if(position==1){
		(*head)=(*head)->ptr;
		free(p);
		return;
	}
	else{
		while((p!=NULL)&&(k!=position)){
			
			k++;
			q=p;
			p=p->ptr;
			
		}
		if(p==NULL){
			cout<<"position not exist";
		}
		else{
			q->ptr=p->ptr;
			free(p);
		}
	}
}
int main(){
	return 0;
}
