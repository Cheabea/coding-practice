#include <iostream>
using namespace std;

void checkprime(int n){
    if(n<=1){
        cout<<"not a prime number"<<endl;
        return;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not a prime number"<<endl;
            return;
        }
    }
    cout<<"prime number"<<endl;
}
int main() {
   int n;
   cout<<"enter a number: "<<endl;
   cin>>n;
   checkprime(n);

    return 0;
}
