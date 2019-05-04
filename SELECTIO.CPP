#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int a[100],i,j,n;
cout<<"Enter size of the array:";
cin>>n;
cout<<"Enter elements of the array";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"Sorted Array:";
for(i=0;i<n;i++){
int min=a[i],pos;
for(j=i;j<n;j++){

if(a[j]<min)
{
min=a[j];
pos=j;
}}
int temp=a[i];
a[i]=min;
a[pos]=temp;
}
for(i=0;i<n;i++)
cout<<a[i];
getch();
}
