#include <iostream>
using namespace std;
int main()
{
    cout << "\n.................Your Calculator................\n";
    char choice;
    int a, b;
    cout << "enter first num: ";
    cin >> a;
    cout << "enter second num: ";
    cin >> b;
    cout << "operation: ";
    cin >> choice;
    switch (choice)
    {
    case '+':
        cout << "Result: " << a + b << "\n";
        break;
  
    case '-':
        cout << "Result: " << a - b << "\n";
        break;
    case '*':
        cout << "Result: " << a * b << "\n";
        break;
    case '/':
        cout << "Result: " << a / b << "\n";
        break;
    case '%':
        cout << "Result: " << a % b << "\n";
        break;
    default:
        cout << "Result: Invalid operation\n";
       
        break;
    }

    return 0;
}