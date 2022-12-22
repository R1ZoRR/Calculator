#include <iostream>
#include <funcs.h>

using namespace std;

int main()
{
    float x, y;
    char symbol;
    cout << "Hello!\nYoure just launched Ivan's calculator.\n";
    cout << "Enter first number:\n";
    cin >> x;
    cout << "Enter second number:\n";
    cin >> y;
    cout << "List of operations: +, -, *, /, 'q' - for exit.\nEnter your operation: ";
    cin >> symbol;

    switch(symbol)
    {
        case '+':
            cout << "result: " << Sum(x, y);
            break;

        case '-':
            cout << "result: " << Substract(x, y);
            break;

        case '*':
            cout << "result: " << Multiply(x, y);
            break;

        case '/':
            cout << "result: " << Divide(x, y);
            break;
        case 'q':
            break;
    }
    cout << endl;
    system("pause");
    return 0;
}

