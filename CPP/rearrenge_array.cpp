#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;

int main()
{
    int count;
    cin >> count;
    int arr[count];
    for (size_t i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (i == arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        if (i != arr[i])
            arr[i] = -1;
    }

    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << ", ";
    }
    return 0;
}