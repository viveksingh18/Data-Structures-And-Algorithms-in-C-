//count no of nodes in a linked list
#include<iostream>
using namespace std;

struct linklist{
	int data;
	struct linklist *next;
};

int count(struct linklist * head){
	int n=0;
	struct linklist *current=head;
	while(current!=NULL){
		n++;
		current=current->next;
	}
	return n;
}

int main(){
	
	//call the function with the linked list  head as parameter 
	return 0;
}
