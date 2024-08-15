// sC 8/14/24
// Sean Coffman
// sumTwoInts.cpp

#include <iostream>

using namespace std;

int main()
{
    int sumTwoIntegers = 0;
    int integerOne;
    int integerTwo;

    cout << "Please enter first number: ";
    cin >> integerOne;
    cout << "\nPlease enter second number: ";
    cin >> integerTwo;

    // Processing; add the user's integers.
    sumTwoIntegers = integerOne + integerTwo;

    // Output the sum of the two integers.
    cout << "\nThe sum of the two integers is: " << sumTwoIntegers << endl;


    return 0;
}
