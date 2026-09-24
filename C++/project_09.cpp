// Reverse a Number

#include <iostream>
using namespace std;
int main()
{
    int reverse_num = 0;
    int n, last_digits;
    cout << "Enter n number : ";
    cin >> n;
    while (n > 0)
    {
        last_digits = n % 10;
        reverse_num = (reverse_num * 10) + last_digits;
        n = n / 10;
    }
    cout << "Your reverse number is : " << reverse_num << endl;

    return 0;
}