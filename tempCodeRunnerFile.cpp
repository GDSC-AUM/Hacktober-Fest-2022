#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the Row and Col Size :"<<endl;
    cin>>row>>col;

    int Arr[row][col];
    cout<<"Enter Arrays Element :-"<<endl;
    for (auto i = 0; i < row; i++)
    {
        for (auto j = 0; j < col; j++)
        {
            cin>>Arr[i][j];

        }
        
    }
    cout<<"Rowwise Sum is As Follows :"<<endl;
    for (auto i = 0; i < row; i++)
    {
        int sum= 0;
        for (auto j = 0; j < col; j++)
        {
            sum += Arr[i][j];
        }
        cout<<sum<<endl;
    }
     cout<<"Colwise Sum is As Follows :"<<endl;
    for (auto i = 0; i < col; i++)
    {
        int sum= 0;
        for (auto j = 0; j < row; j++)
        {
            sum += Arr[j][i];
        }
        cout<<sum<<endl;
    }
    

    return 0;
}