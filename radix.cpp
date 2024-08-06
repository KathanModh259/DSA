#include <iostream>

using namespace std;

int main()
{
    int max = 0, b[10] = {0};
    int arr[5] = {450, 201, 302, 654, 33};

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int exp = 1; max / exp > 0; exp *= 10)
    {
        for (int i = 0; i < 5; i++)
        {
            b[arr[i] % exp] = 1;
        }

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (arr[i] % exp == j)
                {
                    b[j] = arr[i];
                }
            }
        }
    }
    for (int j = 0; j < 5; j++)
    {
        cout << b[j] << " ";
    }
}