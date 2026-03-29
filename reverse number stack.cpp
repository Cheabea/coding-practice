#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n = 1908;
    stack<int> st;
    while(n > 0) {
        st.push(n % 10);
        n = n / 10;
    }

    int rev = 0;
    while(!st.empty()) {
        rev = rev * 10 + st.top();
        st.pop();
    }

    cout << rev;

    return 0;
}
