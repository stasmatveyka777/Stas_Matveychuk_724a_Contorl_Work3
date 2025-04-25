#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << number << (isPrime(number) ? " is a prime number" : " is not a prime number") << endl;
    return 0;
}
