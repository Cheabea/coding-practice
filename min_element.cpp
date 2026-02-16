#include <iostream>
using namespace std;
void minelement(int arr[], int n, int i, int &temp) {
    if(i == n) {
        return;
    }
    if(arr[i] < temp) {
        temp = arr[i];
    }
    minelement(arr, n, i + 1, temp);
}
int main() {
    int arr[4] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp = arr[0];
    minelement(arr, n, 0, temp);
    cout << temp;
    return 0;
}
