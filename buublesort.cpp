#include <iostream>

using namespace std;

int main()
{
    int arr[] = {2, 5, 4, 3, 8, 1, 0};
    int i, temp = 0, sw = 0;
    int n = 7;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                sw++;
            }
        }
        if (sw == 0)
        {
            cout << "Already Sorted";
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
