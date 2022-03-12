#include <bits/stdc++.h>

using namespace std;

int stringtoInteger(char input[], int last)
{
    if (last == 1)
        return input[last] - '0';

    return (10 * stringtoInteger(input, last - 1) + input[last] - '0');
}

int main()
{

    char str[] = {"1234"};
    int len = strlen(str);

    cout << stringtoInteger(str, len - 1);
    return 0;
}