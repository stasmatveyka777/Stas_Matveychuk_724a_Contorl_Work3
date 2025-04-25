#include <iostream>
#include <string>
using namespace std;

int stringLength(const string& str) {
    return str.length();
}

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);
    cout << "Length: " << stringLength(text) << endl;
    return 0;
}
