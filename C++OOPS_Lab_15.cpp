#include<iostream>
using namespace std;

class Contained
{
    private:
        int num;
    public:
        Contained() {cout << "Contained class constructor called:" << endl;}
        void store_num() {cout << "Enter number to be stored in contained class object: "; cin >> num;}
        int return_num() {return num;}
};

class Container
{
    private:
        //Declaring object of contained class inside container class
        Contained object;
    public:
        Container() {object.store_num();}
        void print_num()
            {cout << "Accessing the number stored in contained class object from container class object: " << object.return_num();}
};

//Driver code
int main()
{
    Container C; //Declaring object of container class
    C.print_num(); //Calling function of contained class from container class object
    return 0;
}