//constructer and its type
//constructers a special member function that is automaticaly called when an object is created. its main aim ton set initial values for the data members and inshure the object states its life cycel in a valid state, it has the same name as the class and does not have any return type. it can be overloaded and can be defined inside or outside the class.
//types of constructers
//1. Default constructer (main)
//2. Parameterized constructer (main)
//3. Copy constructer
//4. Constructer with default arguments
//5. Dynamic constructer
// #include <iostream>
// using namespace std;
// class student
// {
//     public:
//      student() //default constructer
//      {
//          cout<<"Default constructer called"<<endl;
//      }
// };
// int main()
// {
//      student s; //default constructer called
//      return 0;
// }
//paramitric constructers uesd to initialise object with values provided by user
// 
//copy constructer used to ceate a new object by coping another object 
// 
//constructer with defualt argument a constructer can have defualt values for its parameters.
#include<iostream>
using namespace std;

class student
{
    int age;
    int marks;
  public:
    student(int a = 18, int m = 50)
    {
        age = a;
        marks = m;
    }
    void display()
    {
        cout << "age ="<< age <<endl;
        cout << "marks =" << marks <<endl;   
    }
};
int main()
{
    student s1;
    student s2(20);
    student s3(21,80);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}