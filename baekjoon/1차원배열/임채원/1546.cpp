#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[1001];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    float avg = 0;
    int _max = *max_element(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        float a = arr[i] / (float)_max * 100;
        avg += a;
    }
    cout << (float)avg / n << endl;
}