#include<iostream>
#include<string>
using namespace std;
class teacher{
private: 
int salary;

public:
string name;
string dept;
int age;

void changedept(string newdept)
{dept=newdept;
}
void setsalary(int s){
salary=s;
}

void getsalary(){
cout<< salary<<endl;
}
};

int main(){
teacher t1;
t1.name="ayush";
t1.dept="electrical";
t1.age=24;

t1.setsalary(250000);

cout<<"name: "<<t1.name<<endl;
cout<<"dept: "<<t1.dept<<endl;
cout<<"age: "<<t1.age<<endl;

t1.getsalary();


return 0;

}
