// Number Guessing Game (random number vs user guess)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int secretNumber = rand() % 100 + 1;

    int userNumber;
    int attempts = 0;

    while (true)
    {
        cout << "Enter your guess number : ";
        cin >> userNumber;

        attempts++;

        if (secretNumber == userNumber)
        {
            cout << "Correct! You guessed it in " << attempts << " attempts.";
            break;
        }

        else if (secretNumber > userNumber)
        {
            cout << "Too low, try again" << endl;
        }

        else
        {
            cout << "Too high, try again" << endl;
        }
    }
    return 0;
}