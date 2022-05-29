#include<iostream>
using namespace std;

//Class to store height in metres and centimeters
class Height
{
    private:
        int metres;
        int centimeters;
    public:
        Height(int m, int cm): metres(m), centimeters(cm) //Constructor declaration
            {cout << "Constructor called." << endl;}
        ~Height() //Destructor declaration
            {cout << "Destructor called.";}
        void display()
            {cout << "Metres: " << metres << " and Centimeters: " << centimeters << endl;}
};

//Driver code
int main()
{
    Height h1(4, 25);
    h1.display();
    return 0;
}