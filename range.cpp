#include <iostream>
using namespace std;

void range(int x,int y){
for(int i=x;i<=y;i++){
cout<<i<<endl;
};
};
int main(){
int a,b;
cout<<"enter the integers: "<<endl;
cin>>a>>b;
cout<<"the integers in between are: "<<endl;
range(a,b);
return 0;
}

