#include <iostream>
using namespace std;

void reverse_dig(int &a, int &b) {
    int n = a;
    int m = b;
    int rev1 = 0;

    while(n > 0) {
        rev1 = rev1 * 10 + n % 10;
        n = n / 10;
    }

    int rev2 = 0;
    while(m > 0) {
        rev2 = rev2 * 10 + m % 10;
        m = m / 10;
    }

    a = rev1;
    b = rev2;
}

void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

int main() {
    int x, y;
    cin >> x >> y;
    reverse_dig(x, y);
    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y << endl;
    return 0;
}
