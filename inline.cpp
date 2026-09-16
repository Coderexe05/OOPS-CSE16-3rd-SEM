// impliment a program to demonstrate inline function, default function and function overloading for performing arithmatic operations.
#include<iostream>
using namespace std;
// inline functions
inline int square(int x){
    return x*x;
}
// default argument
int add(int a, int b=10){
    return a+b;
}
// function overloadiing
int multiply(int a, int b){
    return a*b;
}
double multiply(double a, double b){
    return a*b;
}

int main(){
    
    return 0;
}