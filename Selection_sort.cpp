#include <iostream>
using namespace std;

int main()
{
    int a[] = {11, 12, 10, 3, 2, 1};
    int i, n = 6, j, temp = 0, min;
    for (i = 0; i < n; i++)
    {
        min = a[i];
        for (j = i + 1; j < n; j++)
        {
            if (min > a[j])
            {
                temp = min;
                min = a[j];
                a[j] = temp;
            }
        }
        a[i] = min;
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
