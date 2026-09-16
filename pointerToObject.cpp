// A pointer can store the address of variable they can also store the address of object 
// syntax:- class Name*PointerName,
#include<iostream>
#include<string>
using namespace std;
class student {
public:
string name;
void display()
{
cout<<"Name"<< name<<endl;
}
};
int main(){
string s1;
s1.name = "A B C";
student*ptr = &s1; //pointer to object
cout<<ptr->name<<endl;
ptr->display();
return 0;
}

// Dynamic object creation can be done by using the new creation 
#include<iostream>
using namespace std;
class Employee{
public:
int id;
void display()
{
cout<<"EmplyID"<< id<<endl;
}
};
int main(){
Employee*emp = new Employee;
emp->id = 100;
emp->display();
delete emp;
return 0;
}
