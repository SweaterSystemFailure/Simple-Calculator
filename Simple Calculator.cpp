#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    double x, y;
    char op;

    cout << "Define your first variable: ";
    cin >> x;
    cout << "Define your second variable: ";
    cin >> y;
    cout << "Define your operation [+, -, *, /]: ";
    cin >> op;

    switch (op) {
    case '+':
        cout << x + y;
        break;
    case '-':
        cout << x - y;
        break;
    case '*':
        cout << x * y;
        break;
    case '/':
        y == 0 ?
            cout << "Error! This operation is undefined." :
            cout << x / y;
        break;

    default:
        cout << "Error! Enter a valid operation!";
    }
    return 0;
}


