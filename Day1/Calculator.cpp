// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

int main()
{
    char oper;
    float num1, num2;
    cin >> oper;
    cin >> num1 >> num2;

    switch (oper)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    default:
        cout << "Error! The operator is not correct";
        break;
    }

    return 0;
}