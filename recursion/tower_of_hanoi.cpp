#include<iostream>
using namespace std;

int tower(int n,char from,char to,char aux){
	if(n==1){
		cout<<"Move disk from "<<from<<"to "<<to<<"\n";
		return 1;
	}
	
	tower(n-1,'A','B','C');
	cout<<"Move from "<<from<<" to "<<aux<<"\n";
	tower(n-1,'C','B','A');
	
	
}

int main(){
	int n;
	cin>>n;
	tower(n,'A','B','C');
	return 0;
}
