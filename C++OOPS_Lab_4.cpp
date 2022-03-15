#include<iostream>
#include<math.h>
using namespace std;

//Creating a class Power
class Power
{
    public:
    //Function to evaluate exponential values using two arguments.
    double output(double x, int y)
    {
        double num = 1;
        for(int i = 1; i<=y; i++)
            num = num*x;
        return num;
    }

    //Function to evaluate exponential values using one argument. {Function Overloading}
    double output(double x)
    {
        double num = 1;
        int y = 2;
        for(int i = 1; i<=y; i++)
            num = num*x;
        return num;
    }
    
};

//Main function
int main()
{
    double base;
    int index;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter index: ";
    cin >> index;
    Power result; //Defining an object of class Power
    if(index == 0)
    cout << base << " raised to " << index+2 << " (default index set as 2) is: " << result.output(base);
    else
    cout << base << " raised to " << index << " is: " << result.output(base, index);
    return 0;
}