    // Sean Coffman
    // 8/19/24
    // warmUpWithOutput.cpp

#include <iostream>

using namespace std;

int main()
{
    cout << "\nWelcome to my Warmup!\n" << endl;

    // Create some variables.
    int userAge = 0;
    double userAgeDouble = 0.0;
    char userAgeChar = 'x';

    cout << "\n Please enter your age (as a whole number): ";
    cin >> userAge;

    cout << "\n Please enter your age (as a decimal): ";
    cin >> userAgeDouble;

    cout << "\n Please enter your age (as a single character): ";
    cin >> userAgeChar;

    cout << "\n User age as an integer is: \n " << userAge;

    cout << "\n User age as a decimal number is: \n " << userAgeDouble;

    cout << "\n User age as a single character is: \n " << userAgeChar << endl;

    return 0;
}
