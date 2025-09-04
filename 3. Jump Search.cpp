#include <bits/stdc++.h>
using namespace std;

int jumpSearch(vector<int> &arr, int x) {
    int n = arr.size();
    int step = sqrt(n);
    int prev = 0;

    while (arr[min(step, n) - 1] < x) {
        prev = step;
        step += sqrt(n);
        if (prev >= n) return -1;
    }

    for (int i = prev; i < min(step, n); i++) {
        if (arr[i] == x) return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15};
    int x = 11;

    int result = jumpSearch(arr, x);
    if (result != -1) cout << "Found at index " << result;
    else cout << "Not Found";
    return 0;
}
