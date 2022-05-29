#include<iostream>
using namespace std;

//Base class
class University
{
    public:
        void base()
            {cout << "Base class content" << endl;}
};

//Sub class Department derived from base class University
//Inheriting features of base class University
class Department: public University
{
    public:
        void sub()
            {cout << "Sub class content" << endl;}
};

//Derived class Teacher derived from sub class Department
//Inheriting features of sub class Department and base class University
class Teacher: public Department
{
    public:
        Teacher() {cout << "First derived class constructor called." << endl;}
};

//Derived class Student derived from sub class Department
//Inheriting features of sub class Department and base class University
class Student: public Department
{
    public:
        Student() {cout << "Second derived class constructor called." << endl;}
};

//Driver code
int main()
{
    Department CSE; //Declaring object of sub class Department
    CSE.base(); //Calling function of base class from sub class object
    Teacher HoD; //Declaring object of derived class Teacher
    HoD.sub(); //Calling function of sub class from derived class object
    Student Akshit; //Declaring object of derived class Student
    Akshit.base(); //Calling function of sub class from derived class object
    return 0;
}