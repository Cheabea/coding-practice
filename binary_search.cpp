#include<iostream>
using namespace std;

int main(){
    int a[] = {10,20,30,40,50};
    int k = 20;
    int n = sizeof(a) / sizeof(a[0]);

    int s = 0;
    int e = n - 1;

    while(s <= e){
        int mid = (s + e) / 2;

        if(a[mid] < k){
            s = mid + 1;
        }
        else if(a[mid] > k){
            e = mid - 1;
        }
        else{
            cout << mid;
            return 0;   
        }
    }

    cout << "Element not found";
    return 0;
}
