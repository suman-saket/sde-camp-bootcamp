#include <bits/stdc++.h>
using namespace std;
#define ll long long
void find_all(vector<vector<int>> &res, vector<int> temp, int ind, int n, int i, int r)
{

    if (ind == r)
    {
        res.push_back(temp);
        return;
    }
    if (i >= n)
        return;
    temp[ind] = i + 1;
    find_all(res, temp, ind + 1, n, i + 1, r);
    find_all(res, temp, ind, n, i + 1, r);
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<vector<int>> res;
    vector<int> temp(k, 0);
    find_all(res, temp, 0, n, 0, k);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {

            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
