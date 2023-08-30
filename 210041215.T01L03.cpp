#include <iostream>
using namespace std;

class RationalNumber {
private:
    int numerator;
    int denominator;

public:
    void assign(int n, int d) {
        if (d == 0) {
            cout << "Error: Denominator cannot be zero." << endl;
        } else {
            numerator = n;
            denominator = d;
        }
    }

    double convert() {
    if (denominator != 0) {
        return (double)numerator / denominator;
    } else {
        cout << "Error: Division by zero." << endl;
        return 0.0;
    }
}


    void invert() {
        if (numerator == 0) {
            cout << "Error: Cannot invert a number with numerator zero." << endl;
        } else {
            swap(numerator, denominator);
        }
    }

    void print() {
        cout << "The Rational Number is " << numerator << "/" << denominator << endl;
    }
};

int main() {
    RationalNumber num;

    int n, d;
    cout << "Enter the numerator: ";
    cin >> n;
    cout << "Enter the denominator: ";
    cin >> d;

    num.assign(n, d);
    num.print();
    cout << "In Decimal: " << num.convert() << endl;
    num.invert();
    num.print();

    return 0;
}
