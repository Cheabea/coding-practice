#include <iostream>
using namespace std;

int checkprime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
   return 1;
}
void count_prime(int a[],int n){
    int prime_count=0;
    for(int i=0;i<n;i++){
        if(checkprime(a[i])==1){
            prime_count++;
        }
    }
    cout<<"the number of prime number in the array are: " <<prime_count<<endl;
}
int main() {
   int arr[]={1,2,3,4,5};
   int n=sizeof(arr)/sizeof(arr[0]);
   count_prime(arr,n);

    return 0;
}
