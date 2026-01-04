#include <iostream>
using namespace std;

int binarysearch(int a[], int l, int r, int k) {
    int res = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (a[mid] == k) {
            res = mid;     
            l = mid + 1;    
        }
        else if (a[mid] > k) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return res;
}

int main() {
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    int last_index = binarysearch(arr, 0, n - 1, k);
    cout << last_index;

    return 0;
}

