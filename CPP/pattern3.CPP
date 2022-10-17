#include<bits/stdc++.h>
using namespace std;
int main(){
	int rows;
	cin>>rows;
	for(int i=rows;i!=0;i--){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}

		cout<<endl;
	}
}

// Output :
// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
