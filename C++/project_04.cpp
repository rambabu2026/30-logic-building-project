// Temperature Converter (Celsius ↔ Fahrenheit)

#include <iostream>
using namespace std;
int main()
{
    int choice;
    float celsius, fahrenheit;
    cout << "___MENU___" << endl;
    cout << "1. Enter your Celsius and convert to  Fahrenheit" << endl;
    cout << "2. Enter your Fahrenheit and convert to Celsius" << endl;
    cout << "choice 1 and 2 : ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter your Celsius : ";
        cin >> celsius;
        cout << "Your Fahrenheit is : " << ((celsius * 9 / 5) + 32);
    }
    else if (choice == 2)
    {
        cout << "Enter your Fahrenheit : ";
        cin >> fahrenheit;
        cout << "Your Celsius is : " << ((fahrenheit - 32) * 5 / 9);
    }
    else
    {
        cout << "Invalid choice please enter 1 and 2.";
    }

    return 0;
}