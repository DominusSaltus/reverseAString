#include <string>
#include <iostream>
using namespace std;

string reverseAString (string stringToBeReversed) {
    string stringReversed = stringToBeReversed;
    for (uint i=0; i < stringToBeReversed.length(); i++) {

        uint reversedIndex = stringToBeReversed.length() - i -1;
        stringReversed[i] = stringToBeReversed[reversedIndex];
    }
    return stringReversed;
}

string readAString () {
    string stringToBeReversed;
    cout << "Put the string that is to be reversed:" <<endl;
    cin >> stringToBeReversed;
    //getline (cin,stringToBeReversed);
    return stringToBeReversed;
}

void printAString (string stringToBePrinted) {

    cout << "The reversed string is: " << stringToBePrinted << endl;
}


int main()  {

    string stringToBeReversed;
    while (true) {
        stringToBeReversed = readAString();
        printAString(reverseAString(stringToBeReversed));

        char decision = 'A';
        cout << "Do you want to reverse another string? Y/N: ";
        cin >> decision;

        if (decision == 'Y') {
            continue;
        } else if (decision == 'N') {
            break;
        } else {
            break;
        }

    }
    return  0;
}
