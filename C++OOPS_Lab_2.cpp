#include<iostream>
using namespace std;

//Inline function to calculate multiplication of two numbers.
inline int multiplication(int x, int y)
{
    return x*y;
}

//Main function
int main()
{
    int a, b;
    cout << "Integer multiplication using inline function:" << endl;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    cout << "Multipication: " << multiplication(a,b);
    return 0;
}