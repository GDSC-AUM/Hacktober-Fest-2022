#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int n,number=1;
    cin>>n;
    int i=1;
    while(i<=n){
        int space = n-i;
        while (space--){
            cout<<" ";
        }
        int col=1;
        while (col<=i)
        {
            cout<<number++<<" ";
            col++;
        }
        cout<<endl;
        i++;

        
         
    }


    return 0;
}