#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = i - 1;
        while (space--)
        {
            cout << " ";
        }
        int count =  i;
        while (count<=n)
        {
            cout << count++;
        }
        cout << endl;
        i++;
    }

    return 0;
}