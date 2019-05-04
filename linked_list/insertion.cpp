//insertion in a singly linked list
#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *ptr;
};

void insert(struct node * head,int data,int position){
	int k=1;
	struct node *q,*p,*newNode;
	p=head;
	newNode=new(struct node);
	newNode->data=data;
	if(position==1){
		newNode->ptr=head;
		head=newNode;
	}
	else{
		while((p!=NULL)&&(k!=position)){
			k++;
			q=p;
			p=p->ptr;	
		}
		q->ptr=newNode;
		newNode->ptr=p;
	}
}

int main(){
	//call function
	return 0;
}
