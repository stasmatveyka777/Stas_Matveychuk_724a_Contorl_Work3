#include <iostream>
#include <string>
using namespace std;

string ageCategory(int age) {
    if (age < 0) return "Invalid age";
    if (age < 13) return "Child";
    if (age < 18) return "Teenager";
    if (age < 60) return "Adult";
    return "Senior";
}

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    cout << "Age category: " << ageCategory(age) << endl;
    return 0;
}
