#include<iostream>
using namespace std;

//Sample class to store count
class Counter
{
    private:
        int count;
    public:
        Counter(int x): count(x) {}
        void operator ++ () //Overloading unary operator pre-increment
            {count += 2;}
        void operator -- (int) //Overloading unary operator post-decrement
            {count -= 2;} 
        int display()
            {return count;}
};

//Driver code
int main()
{
    Counter C1(5); //Sample object
    ++C1; //Overloaded operator called
    cout << "Count after pre-increment: " <<C1.display() << endl;
    C1--; //Overloaded operator called
    cout << "Count after post-decrement :" << C1.display();
    return 0;
}