#include <bits/stdc++.h>

using namespace std;

void reverseString(int arr[], int s, int e)
{

    if (s >= e)
        return;

    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;

    reverseString(arr, s + 1, e - 1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }

    reverseString(arr, 0, n - 1);
    return 0;
}