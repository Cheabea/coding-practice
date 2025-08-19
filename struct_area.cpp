
#include <iostream>
using namespace std;
struct area{
int sd;
int len;
int wid;
};
void find_area(int side,int le,int wd){
area a;
a.sd=side;
a.len=le;
a.wid=wd;
int area_square=a.sd*a.sd;
int area_rectangle=a.len*a.wid;

cout<<"area of the square: "<<area_square<<endl;
cout<<"area of the rectangle : "<<area_rectangle;
}
int main(){
int s,l,w;
cout<<"enter the side of the sqaure: ";
cin>>s;
cout<< "enter the lenght and breadth of the rectangle: ";
cin>>l>>w;
find_area(s,l,w);
 return 0;
} 
