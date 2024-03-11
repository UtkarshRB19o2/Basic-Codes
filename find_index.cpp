// Program to find index of an element in an array

#include <iostream>
#include<vector>
using namespace std;


vector<int> find_index(vector<int> arr, int n, int x) {
    vector<int> result;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 5, 5};
    int n = arr.size();
    int x = 5;
    vector<int> result = find_index(arr, n, x);
    if (result.size() == 0) {
        cout << "Element not found in the array" << endl;
    } else {
        cout << "Element found at index: ";
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
    }
    return 0;
}
