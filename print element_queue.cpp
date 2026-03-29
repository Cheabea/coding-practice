#include <iostream>
#include <queue>
using namespace std;

int main() {
int arr[]={2,5,6,7,8};
int n=5;
queue <int> q;
for(int i=0;i<n;i++){
    q.push(arr[i]);
}
while(!q.empty()){
    cout<<q.front();
    q.pop();
}
    return 0;
}
