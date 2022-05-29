#include<iostream>
using namespace std;

class DB; //Class declaration to store distance in feets and inches

class DM //Class to store distance in metres and centimeters
{
    private:
        int metres;
        int centimeters;
        friend DM add(DM, DB); //Friend function declaration
    public:
        DM(): metres(0), centimeters(0) {} //Default Constructor
        DM(int cm): metres(0), centimeters(cm) {} //Overloaded Constructor
        DM(int m, int cm): metres(m), centimeters(cm) {} //Parameterized Constructor
        void display_distance()
        {
            cout << "Metres: " << metres << " and Centimeters: " << centimeters;
        }
};

class DB
{
    private:
        int feets;
        int inches;
        friend DM add(DM, DB); //Friend function declaration
    public:
        DB(): feets(0), inches(0) {} //Default Constructor
        DB(int inch): feets(0), inches(inch) {} //Overloaded Constructor
        DB(int feet, int inch): feets(feet), inches(inch) {} //Parameterized Constructor
};

DM add(DM d1, DB d2) //Friend function to add two obects of different class
{
    DM d3; //Temporary object to store sum of two objects
    //Type conversion from float to int to have greater precision and also work with modulo operator
    int cms = (d2.feets * 30.48) + (d2.inches * 2.54);
    d3.metres = d1.metres + (d1.centimeters + cms)/100;
    d3.centimeters = (d1.centimeters + cms)%100;
    return d3;
}

//Driver code
int main()
{
    //Object declarations with different initializations
    DM d1(4, 55);
    DB d2(5, 9);
    DM d3;
    d3 = add(d1, d2); //Calling friend function to add two objects of different classes
    d3.display_distance();
    return 0;
}