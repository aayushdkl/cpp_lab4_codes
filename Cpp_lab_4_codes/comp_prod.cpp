#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    Complex() : real(0), img(0) {}
    Complex(int r, int i) : real(r), img(i) {}

    Complex operator*(Complex C) {
        Complex result;
        result.real = (real * C.real) - (img * C.img);
        result.img = (real * C.img) + (img * C.real);
        return result;
    }

    void display() {
        cout << "Result: " << real << " + " << img << "i" <<endl;
        cout<<"DONE BY AYUSH DHAKAL"<<endl;
    }
};

int main() {
    Complex c1(3, 2);
    Complex c2(1, 4);

    Complex result = c1 * c2;

    result.display();

    return 0;
}
