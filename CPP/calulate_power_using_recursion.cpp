#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
int power(int base,int a){
    if( a != 0){
        return (base * power(base,a-1));
    }else{
        return 1;
    }
}
int main(){
    int base,val;
    cin>>base;
    cin>>val;
    cout<<"Result : "<<power(base,val);
    return 0;
}