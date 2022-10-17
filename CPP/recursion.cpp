#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
int power(int base,int n){
    if(n != 0){
        return (base* power(base,n-1));
    }else{
        return 1;
    }
}
int main(){
    cout<<power(2,3);
    


    return 0;
}