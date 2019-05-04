#include<iostream.h>
#include<conio.h>
void myMerge(int arr,int beg,int mid, int end){
int A[100],i,j;
int B[100];
//copying beg to mid elements to A
for(i=beg;i<=mid;i++){
A[i-beg]=arr[i];
}
//copying mid+1 to end elements to B
for(i=mid+1;i<=end;i++){
B[i-(mid+1)]=arr[i];
}
//merging
int k=beg;
i=0,j=0;
int sizeA=mid-beg+1;
int sizeB=end-mid;
while(i<sizeA&&j<sizeB){
if(A[i]<B[j]){
	arr[k]=A[i];
	k++;
	i++;


}
else{
	arr[k]=B[j];
	k++;
	j++;
}
}
while(i<sizeA) arr[k++]=A[i++];
while(j<sizeB) arr[k++]=B[j++];
}

void mergeSort(int arr[],int beg,int end){
if(beg>end) return;
int mid=(beg+end)/2;
mergeSort(arr,beg,mid);
mergeSort(arr,mid+1,end);
myMerge(arr,beg,mid,end);
}


void main(){
int arr[100],n,i;
cin>>n;
for(i=0;i<n;i++)
cin>>arr[i];
mergeSort(arr,0,n-1);
for(i=0;i<n;i++)
cout<<arr[i];
getch();
}
