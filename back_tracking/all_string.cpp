//generate all strings of n bits
#include<iostream>
using namespace std;
int A[10];
void generate_string(int n){
	if(n==1){
		cout<<A;
	}
	else{
	A[n-1]=0;
	generate_string(n-1);
	A[n-1]=1;
	generate_string(n-1);
}}

int main(){
	int n;
	cin>>n;
	generate_string(n); 
	return 0;
}
