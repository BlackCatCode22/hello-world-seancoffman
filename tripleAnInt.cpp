// sC 8/14/24
// Sean Coffman
// tripleAnInt.cpp

#include <iostream>

using namespace std;

int main()
{
    int userInteger;
    int tripleInteger = 0;

    cout << "Please enter a number: ";
    cin >> userInteger;

    // Processing; tripling the user's integer.
    tripleInteger = userInteger * 3;

    // Output the triple int.
    cout << "\n The double int is: " << tripleInteger << endl;


    return 0;
}
