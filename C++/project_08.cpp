
// Sum of Digits of a Number


#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n, last_digit;
    cout << "Enter a digit of a number : ";
    cin >> n;
    while (n > 0)
    {
        last_digit = n % 10;
        sum = sum + last_digit;
        n = n / 10;
    }

    cout << "Your total sum is : " << sum << endl;
    return 0;
}