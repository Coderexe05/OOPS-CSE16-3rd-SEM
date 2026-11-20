// # When a operator is overloaded inside a class using a member function, it is called member function operator overloading.
#include<iostream>
using namespace std;

class Number{
    int x;
    public:
    Number(int a){
        x=a;
    }
    Number operator+(Number n){
        return Number(x+n.x);
    }
};

int main(){
    
    return 0;
}