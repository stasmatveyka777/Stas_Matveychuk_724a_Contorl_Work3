#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> commonElements(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    for (int i : a) {
        if (find(b.begin(), b.end(), i) != b.end() &&
            find(result.begin(), result.end(), i) == result.end()) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    vector<int> arr1(n);
    cout << "Enter " << n << " integers: ";
    for (int& x : arr1) cin >> x;

    cout << "Enter size of second array: ";
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter " << m << " integers: ";
    for (int& x : arr2) cin >> x;

    vector<int> common = commonElements(arr1, arr2);
    cout << "Common elements: ";
    for (int x : common) cout << x << " ";
    cout << endl;
    return 0;
}
