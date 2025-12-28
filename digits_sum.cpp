#include<iostream>
using namespace std;
void sum_digits(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    };
    cout<<"sum of the digits in this number is: "<<sum<<endl;
}
int main(){
    int x;
    cout<<"enter a number: "<<endl;
    cin>>x;
    sum_digits(x);
    
    return 0;
}
