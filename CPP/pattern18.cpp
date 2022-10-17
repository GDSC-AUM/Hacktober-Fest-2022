#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch  = 'A'+ n - i;
        while (j<=i)
        {
            cout<<ch++<<" ";
            j++;

        }
        cout<<endl;
        i++;
        
    }


    return 0;
}