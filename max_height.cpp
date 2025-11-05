#include <iostream>
using namespace std;

int main() {
   int arr[4]={1,2,4,5};
   int total=0;;
   int max_height;
   for(int i=0;i<4;i+=2){
   max_height=arr[i]*12+arr[i+1];
   if(total>max_height){
       max_height=total;
   }
       
   }
    cout<<"max height: "<<max_height<<"inches";
    return 0;
}
