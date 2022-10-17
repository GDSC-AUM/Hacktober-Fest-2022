#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    char ch ='A';
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<ch;
            j++;
        }
        ch++;
        cout<<endl;
        i++;

        
    }
    


    return 0;
}