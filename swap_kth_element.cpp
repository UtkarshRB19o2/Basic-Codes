// Program to swap kth element from beginning with kth element from end in an array

#include <iostream>
#include<vector>
using namespace std;

vector<int> swap_kth_element(vector<int> arr, int n, int k) {
    vector<int> result;
    for (int i = 0; i < n; i++) {
        if (i == k - 1) {
            result.push_back(arr[n - k]);
        } else if (i == n - k) {
            result.push_back(arr[k - 1]);
        } else {
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = arr.size();
    int k = 3;
    vector<int> result = swap_kth_element(arr, n, k);
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    return 0;
}