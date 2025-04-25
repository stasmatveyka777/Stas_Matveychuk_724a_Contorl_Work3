#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseString(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);
    cout << "Reversed: " << reverseString(text) << endl;
    return 0;
}
