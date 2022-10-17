#include<bits/stdc++.h>
using namespace std;
int main(){
	int rows,cnt=1;
	cin>>rows;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){ 
			cout<<cnt<<" ";
			
		}
		cnt++;
		cout<<endl;
	}
}


// Output :
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
// 6 6 6 6 6 6 
