#include<iostream>
using namespace std;

//Class to store time in hours and minutes
class TIME
{
    private:
        int hours;
        int minutes;
        friend TIME add(TIME, TIME); //Friend function declaration to add two TIME objects
    public:
        TIME(): hours(0), minutes(0) {} //Default Constructor
        TIME(int mins): hours(0), minutes(mins) {} //Overloaded Constructor
        TIME(int hrs, int mins): hours(hrs), minutes(mins) {} //Parameterized Constructor
        void display_time()
        {
            cout << "Hours: " << hours << " and Minutes: " << minutes;
        }
};

//Friend function definition
TIME add(TIME t1, TIME t2)
{
    TIME t3; //Temporary object to store sum of two TIME objects
    t3.hours = (t1.hours + t2.hours) + (t1.minutes + t2.minutes)/60;
    t3.minutes = (t1.minutes + t2.minutes)%60;
    return t3;
}

//Driver code
int main()
{
    TIME t1(4, 56), t2(34), t3; //Object declarations with different initializations
    t3 = add(t1, t2); //Calling friend function to add two TIME objects
    t3.display_time();
    return 0;
}