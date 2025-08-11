#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 3, 4, 7, 9};
    int value = 10, count = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] + arr[j] == value) {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
