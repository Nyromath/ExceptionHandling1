#include <iostream>
using namespace std;

int main()
{
    cout << "Start\n\n";

    try { //all exception handling statements must be within the try block
        int n;
        cout << "Enter a number between 1 - 10:\t";
        cin >> n;

        if (n > 10) {
            throw 100;
        }
        else if (n < 1) {
            throw 200;
        }

        //Any code below this point will not run if an exception is thrown

        cout << "\nThank you!\n\n";
    }

    //cout << "\nChecking for Errors...\n"; //Try block must immediately be followed by a catch handler. Other statements in between will not work

    catch (int i) { //this block immediately following the try block will catch the first exception the try block throws
        cout << "\nError " << i << " encountered.\n\n"; //this line will output which error id was encountered based on what is thrown.
    }

    cout << "End\n";
    return 0;
}