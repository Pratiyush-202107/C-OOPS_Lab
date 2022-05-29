#include<iostream>
using namespace std;

class Shape //Abstract class
{
    public:
        //Pure virtual function declaration to print number of sides
        virtual void number_of_sides() = 0;
        //The "= 0" syntax doesn't mean we are assigning 0 to the function.
        //It's just the way we define pure virtual functions.
};

//Classes of different shapes with their respective virtual function definition
class Trapezoid: public Shape
{
    public:
        void number_of_sides() //Virtual function implementaion
            {cout << "Trapezoid has 4 sides." << endl;}
};

class Triangle: public Shape
{
    public:
        void number_of_sides() //Virtual function implementaion
            {cout << "Triangle has 3 sides." << endl;}
};

class Hexagon: public Shape
{
    public:
        void number_of_sides() //Virtual function implementaion
            {cout << "Hexagon has 6 sides." << endl;}
};

//Driver code
int main()
{
    //Declaring objects of differnt class
    Trapezoid trapezoid;
    Triangle triangle;
    Hexagon hexagon;
    //Calling virtual function for different classes with their respective implementation
    trapezoid.number_of_sides();
    triangle.number_of_sides();
    hexagon.number_of_sides();
    return 0;
}