#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int arr[10000] = { 0 };
    int idx = 0;

    for (int i = 0; i < n1; i++)
    {
        int a;
        cin >> a;

        
        if (a < n2)
            arr[idx++] = a;
    }

    for (int i = 0; i < idx; i++)
    {
        cout << arr[i] << " ";
    }
    
}
