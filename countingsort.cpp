#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[8] = {4, 3, 5, 1, 9, 9, 4, 5};
    int max = 0;
    for (int i = 0; i < 8; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int array[max];
    for (int j = 0; j < max; j++)
    {
        array[j] = 0;
    }
    for (int k = 0; k < 8; k++)
    {
        array[arr[k]]++;
    }
    for (int k = 0; k < max; k++)
    {
        cout << array[k];
    }
}
