#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 4, 5, 6, 7, 10};
    int even = 0;
    for (int i = 0; i < 6; i++) {
        if (arr[i] % 2 == 0) even++;
    }
    cout << "Even numbers: " << even << endl;
    return 0;
}




