#include<bits/stdc++.h>
using namespace std;
int main(){
	int rows,cnt=1;
	cin>>rows;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){ 
			cout<<cnt<<" ";
			cnt++;
		}

		cout<<endl;
	}
}

// Output :
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 21 
// over here we used  a simple cnt for creating a next number +1
