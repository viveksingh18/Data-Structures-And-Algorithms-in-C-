//Print nos 1 to n backwards
#include<iostream>
using namespace std;
int print(int n){
	if(n==1){
		cout<<1;
		return 1;
	}
	else {
		cout<<n;
		print(n-1);
	}
}
int main(){
	int n;
	cin>>n;
	print(n);
	return 0;
}
