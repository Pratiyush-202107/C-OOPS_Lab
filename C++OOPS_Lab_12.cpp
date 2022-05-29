#include<iostream>
using namespace std;

class Boy //Base class 1
{
    public:
        void boy()
            {cout << "Boy wears jeans and t-shirt." << endl;}
};

class Girl //Base class 2
{
    public:
        void girl()
            {cout << "Girl wears top and skirt.";}
};

//Derived class from base class 1 and 2, i.e., inheriting features of both base classes
class Child: public Boy, public Girl
{
    public:
        Child() {cout << "Dressing sense for child." << endl;}  //Constructor declaration
};

//Driver code
int main()
{
    Child kid; //Declaring object of derived class Child
    kid.boy(); //Calling function of base class Boy from derived class object
    kid.girl(); //Calling function of base class Girl from derived class object
    return 0;
}