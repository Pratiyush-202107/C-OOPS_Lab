#include<iostream>
using namespace std;

//Base class
class A
{
    public:
        void display_A()
            {cout << "Base class function." << endl;}
};

//Sub class B derived from base class A, i.e., inheriting features of base class A
class B: public A
{
    public:
        void display_B()
            {cout << "Sub class function.";}
};

//Derived class C derived from sub class B, i.e., inheriting features of sub class B.
//But sub class B inherits the features of class A.
//Therefore, derived class C will inherit features of both base class A and sub class B. 
class C: public B
{
    public:
        C() {cout << "Derived constructor called." << endl;}  
};

//Driver code
int main()
{
    C object; //Declaring object of derived class C
    object.display_A(); //Calling functiion of base class A from derived class object
    object.display_B(); //Calling functiion of sub class B from derived class object
    return 0;
}