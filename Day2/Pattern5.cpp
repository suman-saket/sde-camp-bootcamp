#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int row = 0; row < 2 * n; row++)
    {
        int totalColsInRow = row > n ? 2 * n - row : row;
        for (int col = 0; col < totalColsInRow; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}