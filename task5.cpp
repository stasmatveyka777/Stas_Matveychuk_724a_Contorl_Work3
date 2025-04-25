#include <iostream>
#include <vector>
using namespace std;

int sumArray(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) sum += num;
    return sum;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter " << n << " integers: ";
    for (int& x : nums) cin >> x;
    cout << "Sum of array: " << sumArray(nums) << endl;
    return 0;
}
