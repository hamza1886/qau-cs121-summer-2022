#include <iostream>

using namespace std;

class Complex {
private:
    float real, imaginary;
public:
    explicit Complex(float r = 0.0f, float i = 0.0f) {
        real = r;
        imaginary = i;
    }

    Complex(const Complex &c) {
        real = c.real;
        imaginary = c.imaginary;
    }

    Complex operator+(const Complex &c) const {
        Complex complex{};
        complex.real = real + c.real;
        complex.imaginary = imaginary + c.imaginary;

        return complex;
    }
};

int main() {
    Complex c1(1.5f, 2.5f);
    Complex c2(4.7f, 8.7f);

    Complex c3(c1 + c2);

    return 0;
}
