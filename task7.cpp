#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortArray(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " integers: ";
    for (int& x : arr) cin >> x;
    sortArray(arr);
    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;
    return 0;
}
