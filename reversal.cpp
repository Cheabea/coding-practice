#include <iostream>
using namespace std;

int main() {
    int arr[4] = {4, 1, 2, 3};
    int b[4];
    int j = 0;

    for (int i = 3; i >= 0; i--) {
        b[j] = arr[i];
        j++;
    }

    for (j = 0; j < 4; j++) {
        cout << b[j] << " ";
    }

    return 0;
}

