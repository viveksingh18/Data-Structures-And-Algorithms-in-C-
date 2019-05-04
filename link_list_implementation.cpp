//Basic Link list implementation in C++
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
Node* head; //pointer to start node i.e first link

//Inserting a node at beginning
void Insert(int x){
	Node* temp=new Node;
	temp->data=x;
	temp->next=head;//temp points to the node where previously head was pointing
	head=temp;
}

//Transvering and printing link list
void Print(){
	Node* temp=head;
	cout<<"List is:";
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<"\n";
}

int main(){
	int n,x;
	head=NULL; //empty list
	cout<<"How many nos to be stored in linked list?";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter No.";
		cin>>x;
		Insert(x);
		Print();
	}
}
