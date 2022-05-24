#include<iostream>
using namespace std;

class Complex
{
    private:
    int re, im;
    public:
    Complex(): re(0), im(0) {} //Default constructor
    Complex(int re_, int im_): re(re_), im(im_) {} //Parameterized constructor
    Complex(int re_): re(re_), im(4) {} //Overloaded constructor
    Complex(const Complex &x): re(x.re), im(x.im) {} //Copy constructor
    int getre() {return re;}
    int getim() {return im;}
};

int main()
{
    Complex a; //Default constructor called
    cout << "Default constructor called: a()\n" << "a.re: " << a.getre() << " & a.im: " << a.getim() << endl;
    Complex b(5,7); //Parameterized constructor called
    cout << "Parameterized constructor called: b(5,7)\n" << "b.re: " << b.getre() << " & b.im: " << b.getim() << endl;
    Complex c(3); //Overloaded constructor called
    cout << "Overloaded constructor called: c(3)\n" << "c.re: " << c.getre() << " & c.im: " << c.getim() << endl;
    Complex d(c); //Copy constructor called
    cout << "Copy constructor called: d(c)\n" << "d.re: " << d.getre() << " & d.im: " << d.getim() << endl;
    return 0;
}