#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int x) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) 
          return mid;
        else if (arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {5, 10, 15, 20, 25, 30};
    int x = 20;

    int result = binarySearch(arr, x);
    if (result != -1) cout << "Found at index " << result;
    else cout << "Not Found";
    return 0;
}
