#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the Row and Col Size :" << endl;
    cin >> row >> col;

    int Arr[row][col];
    cout << "Enter Arrays Element :-" << endl;
    for (auto i = 0; i < row; i++)
    {
        for (auto j = 0; j < col; j++)
        {
            cin >> Arr[i][j];
        }
    }
    for (int i = 0; i < col; i++)
    {
        if ((i + 2) % 2 == 0)
        {
            for (int j = 0; j < row; j++)
            {
                cout << Arr[j][i] << endl;
            }
        }
        else
        {
            for (int j = row ; j >= 0; j--)
            {
                cout << Arr[j][i] << endl;
            }
        }
        cout << endl;
    }

    return 0;
}