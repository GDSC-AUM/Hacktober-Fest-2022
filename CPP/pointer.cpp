#include<bits/stdc++.h>
#include<limits>
using namespace std;

int main(){
    int a=10;
    int *aptr;
    aptr = &a;
    // Referencing to variable

    cout<<*aptr<<endl;
    // de referencing
 
    // update without touching a 
    *aptr = 20;
    cout<<a<<endl;

    // We can perform Arithmatic operation on pointer such as ++,--,+,-
    
    aptr++;
    cout<<aptr<<endl;

    return 0;
}