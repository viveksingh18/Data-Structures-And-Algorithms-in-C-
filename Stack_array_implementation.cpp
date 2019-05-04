#include<iostream>
#define MAX_SIZE 101
using namespace std;
int A[MAX_SIZE];
int top=-1;  //empty stack
void Push(int x){
	if(top==MAX_SIZE-1){
	cout<<"Stack Overflow";
	return;}
	top++;
	A[top]=x;
}

void Pop(){
	if(top==-1){
	cout<<"Stack Underflow";
	return;}
	top--;
}

int Top(){
	return A[top]; 
}

void Print(){
	cout<<"Stack:";
	for(int i=0;i<=top;i++){
		cout<<A[i];
	}
	cout<<"\n";
}

int main(){
	Push(4);
	Push(2);
	Print();
	Pop();
	Print();
	cout<<Top();	
}
