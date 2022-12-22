#include <iostream>
#include <funcs.h>

using namespace std;

int main()
{
    float x, y;
    char symbol;

    cout << "Enter first number:\n";
    cin >> x;
    cout << "Enter second number:\n";
    cin >> y;
    cout << "Options: +, -, *, /, r, q.\nEnter your operation: ";
    cin >> symbol;

    switch(symbol)
    {
        case '+':
            cout << "Placeholder.";
            break;

        case '-':
            cout << "Placeholder.";
            break;

        case '*':
            cout << Multiply(x, y);
            break;

        case '/':
            cout << Divide(x, y);
            break;
        case 'q':
            break;
    }
    cout << endl;
    system("pause");
    return 0;
}

