#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool issafe(int** arr,int row,int col,int n){
	int i,j;
	for(i=0;i<col;i++){
		if(arr[row][i]==1){
			return false;
		}
	}
	//left upward diagonal
	for(i=row,j=col;i>=0 && j>=0 ;i--,j--){
		if(arr[i][j]==1){
			return false;
		}
	}
	//right
	for(i=row,j=col;j>=0 && i<n;i++,j--){
		if(arr[i][j]==1){
			return false;
		}
	}
	return true;
}
bool nqueen(int** arr,int col,int n){
	//base
	if(col>=n){
		return true;
	}
	//recursive
	for(int i=0;i<n;i++){
		if(issafe(arr,i,col,n)){
			arr[i][col]=1;  //1 place
			if(nqueen(arr,col+1,n)){
				return true;
			}
			arr[i][col]=0;
		}
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	int **arr=new int*[n];
	for(int i=0;i<n;i++){
		arr[i]=new int[n];
		for(int j=0;j<n;j++){
			arr[i][j]=0;
		}
	}
	if(nqueen(arr,0,n)){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<arr[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}
