//Stack as Link list-Inserting and Deleting from a link list from the beginning since it takes constant time   
#include<iostream>
#include<malloc.h>
using namespace std;

struct Node{
	int data;
	Node* link;
};

struct Node* top=NULL;

void Push(int x){
	Node* temp=new Node;
	temp->data=x;
	temp->link=top; //temp points to the node where previously head was pointing
	top=temp;
}

void Pop(){
	Node* temp;
	if(top==NULL) return;
	temp=top;
	top=top->link;
	free(temp);
}

//Transvering and printing link list
void Print(){
	Node* temp=top;
	cout<<"Stack is:";
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->link;
	}
	cout<<"\n";
}


int main(){
	Push(3);
	Push(5);
	Print();
	Pop();
	Print();
	
}
