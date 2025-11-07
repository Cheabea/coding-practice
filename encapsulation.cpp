#include <iostream>
using namespace std;
class student{
    private:
    int marks;
    public:
    string name;
    int id;
    string subject;
    void setmarks(int m){
        marks=m;
    }
    int getmarks(){
        return marks;
    }
};
int main(){
    student s1;
    s1.name="ayush";
    s1.id=10;
    s1.subject="maths";
    s1.setmarks(90);
    cout<<"student name:"<<s1.name<<endl;;
    cout<<"id: "<<s1.id<<endl;
    cout<<"subject: "<<s1.subject<<endl; 
    cout<<"marks: "<<s1.getmarks()<<endl;
    
    return 0;
 }
