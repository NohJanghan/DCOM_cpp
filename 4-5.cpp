// 5. sum of complex
#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int img;

    Complex(int real, int img): real(real), img(img) {}    
};

Complex operator+(const Complex& a, const Complex& b) {
    return Complex(a.real + b.real, a.img + b.img);
}

int main() {
    Complex a = Complex(1, 2);
    Complex b = Complex(3, 4);
    Complex c = a + b;
    cout << c.real << " + " << c.img << "i" << endl;

    return 0;
}