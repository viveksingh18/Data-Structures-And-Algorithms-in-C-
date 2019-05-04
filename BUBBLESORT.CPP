#include<iostream.h>
#include<conio.h>
void main(){
int a[100],i,j,n;
cout<<"Enter size of the array:";
cin>>n;
cout<<"Enter elements of the array";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"Sorted Array:";
for(i=0;i<n;i++){
for(j=0;j<n-1;j++){
if(a[j]>a[j+1])
{
int temp;
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}}
}
for(i=0;i<n;i++)
cout<<a[i];
getch();
}
