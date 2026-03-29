#include <iostream>
#include<stack>
using namespace std;
int main() {
   string s="mitochondria";
   stack<char> st;
   int n=s.length();
   for(int i=0;i<n;i++){
       st.push(s[i]);
   }
   for(int i=0;i<n;i++){
       cout<<st.top();
       st.pop();
   }

    return 0;
}
