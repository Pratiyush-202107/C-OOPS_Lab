#include<iostream>
using namespace std;

//Class to store time in hours and minutes
class TIME
{
    private:
        int hours;
        int minutes;
    public:
        TIME(): hours(0), minutes(0) {} //Default Constructor
        TIME(int mins): hours(0), minutes(mins) {} //Overloaded Constructor
        TIME(int hrs, int mins): hours(hrs), minutes(mins) {} //Parameterized Constructor
        TIME operator + (TIME t) //Overloading binary operator addition
        {
            TIME t1; //Temporary object to store sum
            t1.hours = (hours + t.hours) + (minutes + t.minutes)/60;
            t1.minutes = (minutes + t.minutes)%60;
            return t1;
        }

        void display_time()
        {
            cout << "Hours: " << hours << " and Minutes: " << minutes << endl;
        }
};

//Driver code
int main()
{
    //Declaring objects of class TIME with different initializations
    TIME t1(4, 56), t2(34), t3;
    cout << "t1: ";
    t1.display_time();
    cout << "t2: ";
    t2.display_time();
    t3 = t1 + t2; //Overloaded operator called
    cout << "t1 + t2: ";
    t3.display_time();
    return 0;
}