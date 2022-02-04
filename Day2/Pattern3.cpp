#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        //for every row, run the column
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << "*";
        }
        //when row is printed,we need to add a newline
        cout << endl;
    }

    return 0;
}