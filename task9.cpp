#include <iostream>
using namespace std;

int rectangleArea(int length, int width) {
    return length * width;
}

int main() {
    int l, w;
    cout << "Enter length and width: ";
    cin >> l >> w;
    cout << "Area of rectangle: " << rectangleArea(l, w) << endl;
    return 0;
}
