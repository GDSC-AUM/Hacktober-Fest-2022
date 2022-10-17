#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int star = n-i+1;
        while(star--){
            cout<<"*";
        }
        cout<<endl;
        i++;
        
    }


    return 0;
}