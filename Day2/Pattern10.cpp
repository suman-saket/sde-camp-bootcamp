#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        int noOfSpaces = n - row;
        for (int col = 1; col < noOfSpaces; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}