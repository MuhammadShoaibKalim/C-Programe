/*
Write a program that show the reptition structure.
*/
#include <iostream>
using namespace std;

int main() {
	
    char cha;
    cout << "Enter the value for char: ";
    cin >> cha;

    if (cha >= 'a' && cha <= 'z') {
        cout << "This is lower case.";
    }
    else if (cha >= 'A' && cha <= 'Z') {
        cout << "This is upper case.";
    }
    else if (cha >= '0' && cha <= '9') {
        cout << "This is numeric.";
    }

    return 0;
}
