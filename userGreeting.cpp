// sC 8/14/24
// Sean Coffman
// userGreeting.cpp

#include <iostream>
using namespace std;

int main()
{
    // "String" before title allows user to input words.
    string name;

    cout << "Please enter your name:";
    cin >> name;

    // Print the greeting.
    cout<< "\nHello, " << name <<", I hope you have been enjoying your day!" << endl;

    return 0;
}