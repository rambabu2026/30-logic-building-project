// Simple Calculator (+, -, *, / with if-else)

#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char op;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second nubmer : ";
    cin >> b;
    cout << "Enter operator (+ - * /) : ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Your addition is : " << a + b << endl;
        break;
    case '-':
        cout << "Your substraction is : " << a - b << endl;
        break;
    case '*':
        cout << "Your multiplication is : " << a * b << endl;
        break;
    case '/':
        if (b == 0){
            cout << "Error, cannot divided by zero!";
        }
        else{
            cout << "Your division is : " << a / b << endl;
        }
        break;

    default:
        cout << "Invalid operator please select correct operator";
        break;
    }
    return 0;
}