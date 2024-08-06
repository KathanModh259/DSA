#include <iostream>
using namespace std;

int check(int arr[], int l, int r, int m)
{
    int temp[10];
    for (int i = 0; i < 5; i++)
    {
        temp[i] = arr[i];
    }
    if (temp[(l + r) / 2] == m)
    {
        cout << "Answer is : " << ((l + r) / 2);
    }
    else if (temp[(l + r) / 2] < m)
    {
        check(arr, ((l + r) / 2) + 1, r, m);
    }
    else if (temp[(l + r) / 2] > m)
    {
        check(arr, l, (((l + r) / 2) - 1), m);
    }
}

/*int small(int l,int r,int m)
{

}*/

int main()
{
    int arr[50];
    int n, m, l = 0, r;
    cout << "Enter the size of Array : ";
    cin >> n;
    r = n - 1;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of " << i << " element : ";
        cin >> arr[i];
    }

    cout << "Enter the number you want to find : ";
    cin >> m;

    check(arr, l, r, m);

    /*for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }*/
}
