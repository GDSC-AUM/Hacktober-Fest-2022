#include<bits/stdc++.h>
#include<limits>
using namespace std;

int main(){
    int a=10;
    int *ptr_a;
    ptr_a = &a;

    int **ptr__a=&ptr_a;
    cout<<a<<endl;
    cout<<*ptr_a<<endl;
    cout<<*ptr__a<<endl;  //Addres 0f the ptr a
    cout<<**ptr__a<<endl; //de referencing twice as it contain two ** so it will go two step backs
    
    


    return 0;
}