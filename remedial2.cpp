// write a program increment a number using pass by value, call by reference and pass by address and observe the output.
#include <iostream>
using namespace std;
void incrementByValue(int n) {
    n++;
    cout << "Inside incrementByValue: " << n << '\n';
}
void incrementByReference(int &n) {
    n++;
    cout << "Inside incrementByReference: " << n << '\n';
}
void incrementByAddress(int *n) {
    (*n)++;
    cout << "Inside incrementByAddress: " << *n << '\n';
}
int main() {
    int num = 10;
    cout << "Initial value of num: " << num << "\n\n";

    cout << "Testing Pass by Value\n";
    incrementByValue(num);
    cout << "Value of num in main: " << num << "\n\n";

    cout << "Testing Call by Reference\n";
    incrementByReference(num);
    cout << "Value of num in main: " << num << "\n\n";

    cout << "Testing Pass by Address\n";
    incrementByAddress(&num);
    cout << "Value of num in main: " << num << '\n';

    return 0;
}