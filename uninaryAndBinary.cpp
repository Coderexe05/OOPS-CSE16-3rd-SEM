// design a program to overload uninary and binary operators in user defined class.
#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    Complex operator-() {
        return Complex(-real, -imag);
    }
    Complex operator++() {
        ++real;
        ++imag;
        return *this;
    }
    Complex operator++(int) {
        Complex temp = *this;
        real++;
        imag++;
        return temp;
    }
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
    Complex operator-(const Complex& obj) {
        return Complex(real - obj.real, imag - obj.imag);
    }
    Complex operator*(const Complex& obj) {
        return Complex((real * obj.real) - (imag * obj.imag), (real * obj.imag) + (imag * obj.real));
    }
    void display() const {
        if (imag < 0)
            cout << real << " - " << -imag << "i" << endl;
        else
            cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1(4.0, 5.0);
    Complex c2(2.0, 3.0);
    Complex result;
    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();
    result = c1 + c2;
    cout << "c1 + c2: ";
    result.display();
    result = c1 - c2;
    cout << "c1 - c2: ";
    result.display();
    result = c1 * c2;
    cout << "c1 * c2: ";
    result.display();
    result = -c1;
    cout << "-c1: ";
    result.display();
    ++c1;
    cout << "++c1: ";
    c1.display();
    c1++;
    cout << "c1++: ";
    c1.display();
    return 0;
}