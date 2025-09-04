#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int exponentialSearch(vector<int> &arr, int x) {
    int n = arr.size();
    if (arr[0] == x) return 0;

    int i = 1;
    while (i < n && arr[i] <= x) i *= 2;

    return binarySearch(arr, i / 2, min(i, n - 1), x);
}

int main() {
    vector<int> arr = {2, 4, 8, 16, 32, 64, 128};
    int x = 32;

    int result = exponentialSearch(arr, x);
    if (result != -1) cout << "Found at index " << result;
    else cout << "Not Found";
    return 0;
}
