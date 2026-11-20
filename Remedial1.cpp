// Create a class temperature, convert ceslcuis into fehrenhiet.
#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;
public:
    Temperature(double c = 0.0) : celsius(c) {}
    void setCelsius(double c) {
        celsius = c;
    }
    double getCelsius() const {
        return celsius;
    }
    double toFahrenheit() const {
        return (celsius * 9.0 / 5.0) + 32.0;
    }
    static double toFahrenheit(double c) {
        return (c * 9.0 / 5.0) + 32.0;
    }
};

int main() {
    Temperature temp(25.0);
    cout << temp.getCelsius() << " C = " << temp.toFahrenheit() << " F" << endl;
    cout << "100 C = " << Temperature::toFahrenheit(100.0) << " F" << endl;
    return 0;
}