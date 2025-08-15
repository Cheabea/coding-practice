#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Number of rows: ";
    cin >> rows;
    cout << "Number of columns: ";
    cin >> cols;

    int a[rows][cols], b[rows][cols], c[rows][cols];

    cout << "Elements of first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Elements of second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> b[i][j];
        }
    }

    cout << "Sum of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

