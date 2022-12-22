#include <iostream>
#include <funcs.h>

using namespace std;

int main()
{
    float x, y;
    char symbol;

    cout << "1.\n";
    cin >> x;
    cout << "2.\n";
    cin >> y;
    cout << "3.\n";
    cin >> symbol;

    switch(symbol)
    {
        case '+':
            cout << Sum(x, y);
            break;

        case '-':
            cout << Substract(x, y);
            break;

        case '*':
            cout << "Placeholder.";
            break;

        case '/':
            cout << "Placeholder.";
            break;
        case 'r':
            cout << "Placeholder.";
            break;
        case 'q':
            cout << "Placeholder.";
            break;
    }
    cout << endl;
    system("pause");
    return 0;
}

