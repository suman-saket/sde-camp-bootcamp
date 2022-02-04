//Print 1 to 100 using Recusrsion

#include <bits/stdc++.h>

using namespace std;

void printNumbers(int n)
{
    if (n == 0)
        return;

    else
        printNumbers(n - 1);
    cout << n << endl;
}

int main()
{

    int n = 100;
    printNumbers(n);

    return 0;
}