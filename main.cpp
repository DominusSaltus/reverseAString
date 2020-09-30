#include <string>
#include <iostream>
using namespace std;

int main()  {

    string stringToBeReversed;
    cout << "Put the string that is to be reversed:" <<endl;
    getline (cin,stringToBeReversed);
    string stringReversed = stringToBeReversed;
    for (uint i=0; i < stringToBeReversed.length(); i++) {

        uint reversedIndex = stringToBeReversed.length() - i -1;
        stringReversed[i] = stringToBeReversed[reversedIndex];
    }
    cout << "This is reversed string: " << stringReversed << endl;
    return  0;

}
