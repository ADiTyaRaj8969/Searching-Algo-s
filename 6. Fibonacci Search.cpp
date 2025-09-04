#include <bits/stdc++.h>
using namespace std;

int fibonacciSearch(vector<int> &arr, int x) {
    int n = arr.size();
    int fib2 = 0, fib1 = 1, fib = fib1 + fib2;

    while (fib < n) {
        fib2 = fib1;
        fib1 = fib;
        fib = fib1 + fib2;
    }

    int offset = -1;
    while (fib > 1) {
        int i = min(offset + fib2, n - 1);

        if (arr[i] < x) {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        }
        else if (arr[i] > x) {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        }
        else return i;
    }

    if (fib1 && offset + 1 < n && arr[offset + 1] == x) return offset + 1;
    return -1;
}

int main() {
    vector<int> arr = {5, 10, 15, 20, 25, 30};
    int x = 25;

    int result = fibonacciSearch(arr, x);
    if (result != -1) cout << "Found at index " << result;
    else cout << "Not Found";
    return 0;
}
