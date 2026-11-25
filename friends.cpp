// when a child class provides its own function that ara already defined in parent class 
#include<iostream>
using namespace std;

class Animal{
public:
void sound(){
    cout<<"Animal makes sounds"<<endl;
}
};
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};
int main(){
    Animal a;
    Dog d;
    a.sound();
    d.sound();
    return 0;
}