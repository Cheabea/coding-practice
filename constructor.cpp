#include<iostream>
using namespace std;

class student{
public:
string name;
int id;
string course;
void introduce(){
cout<<"the name of the student is: "<<name<<endl;
cout<<"the id of the student is: "<<id<<endl;
cout<<"the course of the student is: "<<course<<endl;
}
student(string n,int i,string c){
name=n;
id=i; 
course=c;
}
};
int main(){
student s1= student("ayush",10,"EEE");
s1.introduce();
student s2= student("Tushar",60,"ETC");
s2.introduce();


return 0;
}
