#include <bits/stdc++.h>

using namespace std;

void printSubsequnce(int index, vector<int> &ds, int arr[], int n)
{

    if (index == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    //Take a particular index into subsequnce
    ds.push_back(arr[index]);
    printSubsequnce(index + 1, ds, arr, n);
    ds.pop_back();

    //not pick, this element is not added to your subsequnce
    printSubsequnce(index + 1, ds, arr, n);
}

int main()
{

    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printSubsequnce(0, ds, arr, n);
    return 0;
}