#include<iostream.h>
#include<conio.h>
const int N=4;

int canPlace(int board[][N],int x,int y){
int i,j;
//check along the row
for(i=0;i<N;i++){
if(board[x][i]==1)return 0;
}
//checking along column
for(i=0;i<N;i++){
if(board[i][y]==1) return 0;
}
//checking left diagnol
i=x-1;
j=y-1;
while(i>=0&&j>=0){
if(board[i][j]==1) return 0;
i--;
j--;
}
//checking right diagnol
i=x+1;
j=y+1;
while(i>=0&&j>=0)
{
if(board[i][j]==1) return 0;
i++;
j++;
}
}

void print(int board[][N],int n=N){
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
cout<<board[i][j]<<" ";
cout<<endl;
}
}

int queen(int board[][N],int cRow){
if(cRow==N){
//means we have filled the board
print(board,N);
return 1;
}
//try placing a queen in each column of current row
for(int col=0;col<N;col++){
if(canPlace(board,cRow,col)==1){
//yes we can place a queen here
board[cRow][col]=1;  //placement done

int ask=queen(board,cRow+1);
if(ask==1){
return 1; //No need to look anymore
//our decision of placing queen was right
}
//else Recursion was not able to find a solution with current config
board[cRow][col]=0;

}
}
//tried all columns for current row but was not able to find solution
return 0;
}

void main(){
int board[N][N]={0};
queen(board,0);
getch();
}
