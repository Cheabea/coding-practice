#include <iostream>
using namespace std;

int binarysearch(int a[], int l, int r, int k) {
    if (l <= r) {
        int mid = l + (r - l) / 2;

        if (a[mid] == k)
            return mid;
        else if (a[mid] > k)
            return binarysearch(a, l, mid - 1, k);
        else
            return binarysearch(a, mid + 1, r, k);
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int k = 50;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarysearch(arr, 0, n - 1, k);
    cout << result;

    return 0;
}
