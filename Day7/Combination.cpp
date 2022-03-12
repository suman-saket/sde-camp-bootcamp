
#include <bits/stdc++.h>

using namespace std;

void printSubsequence(int index, vector<int> &ds, int arr[], int n)
{
    if (index == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    //pick a index into particular subsequnce(ds)
    ds.push_back(arr[index]);
    printSubsequence(index + 1, ds, arr, n);
    ds.pop_back();

    //not pick a index into your subsequnce(ds)
    printSubsequence(index + 1, ds, arr, n);
}

int main()
{

    int arr[] = {1, 2, 3, 4};
    int n = 2;
    vector<int> ds; //This will carry all the subsequence
    printSubsequence(0, ds, arr, n);
    return 0;
}