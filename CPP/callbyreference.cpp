#include<bits/stdc++.h>
#include<limits>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=10;
    int b=20;
    swap(&a,&b);
    cout<<a<<" <-  a  b -> "<<b<<endl;


    return 0;
}