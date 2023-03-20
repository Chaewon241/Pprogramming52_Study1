#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int arr[101] = { 0 };
    for (int i = 0; i < 101; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < n2; i++)
    {
        int a, b;
        cin >> a >> b;
        int anum = arr[a];
        int bnum = arr[b];

        arr[a] = bnum;
        arr[b] = anum;
    }

    for (int i = 0; i < n1; i++)
    {
        cout << arr[i+1] << " ";
    }
}