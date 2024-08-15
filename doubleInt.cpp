// sC 8/14/24
// Sean Coffman
// doubleInt.cpp

#include <iostream>

using namespace std;

int main()
{
    int userInteger;
    int doubleInteger = 0;

    cout << "Please enter a number: ";
    cin >> userInteger;

    // Do some processing! Double the user's integer!
    doubleInteger = userInteger * 2;

    // Output the double int.
    cout << "\n The doubled int is: " << doubleInteger << endl;


    return 0;
}
