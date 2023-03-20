#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int arr[101];

    for (int i = 0; i < 101; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < n2; i++)
    {
        int a, b;
        cin >> a >> b;

        for (int j = a; j <= b; j++)
        {
            int num_a = arr[j];
            int num_b = arr[b];

            arr[j] = num_b;
            arr[b] = num_a;
            b--;
        }
    }

    for (int i = 1; i <= n1; i++)
    {
        cout << arr[i] << " ";
    }
}