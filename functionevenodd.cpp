#include <iostream>
using namespace std;

void Evenodd(int a[],int n){
    int d=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            d++;
        }
    }
    cout<<"the number of even number in the array are: "<<d<<endl;
    cout<<"the number of odd number in the array are: "<<n-d<<endl;
}
int main() {
  int a[]={7,8,9};
  int n;
  n=sizeof(a)/sizeof(a[0]);
  Evenodd(a,n);

    return 0;
}
