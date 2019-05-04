#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int a[100],i,n;
cout<<"Enter size of the array:";
cin>>n;
cout<<"Enter elements of the array";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"Sorted Array:";
for(i=0;i<n;i++){
int j=i;
while(j-1>=0 && a[j]<	a[j-1]){
int temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;
j--;	}    }
for(i=0;i<n;i++)
cout<<a[i];
getch();
}
