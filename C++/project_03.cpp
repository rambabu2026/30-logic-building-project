// Simple Interest Calculator

#include <iostream>
using namespace std;
int main()
{
    float principal, rate, time;
    cout << "Enter your Principal amount : ";
    cin >> principal;
    cout << "Enter your Rate of interest (per year, %) : ";
    cin >> rate;
    cout << "Enter your Time (years me) : ";
    cin >> time;
    float interest = ((principal * rate * time) / 100);
    cout << "Your Simple interest is : " << interest << endl;
    cout << "Your Total amount is : " << principal + interest << endl;
    return 0;
}