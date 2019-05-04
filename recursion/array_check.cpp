//check is array is in sorted order
#include<iostream>
using namespace std;

int check(int A[],int n){
	if(n==1){
		return 1;
	}
	return (A[n-1]<A[n-2])?0:check(A,n-1);
}

int main(){
	int A[3]={5,2,3};
	if(check(A,3)){
		cout<<"sorted";
	}
	else cout<<"not sorted";
	return 0;
}
